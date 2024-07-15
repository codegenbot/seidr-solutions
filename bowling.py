```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for roll in frames.replace("/", ""):
        if int(roll) == 10:  
            score += 10 + (2 if frame_number < 9 else 1)*10
            frame_number += 1
        elif int(roll) < 5 or (int(roll) >= 5 and len(frames.replace("/", "")) - len(str(frame)) <= 1):
            score += sum(map(int, str(frame)))
            if len(str(frame)) == 2:
                frame_number += 1
        else:  
            score += int(roll)
    return score