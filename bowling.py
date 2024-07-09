```
def bowling_score(frames):
    score = 0
    frames_list = frames.split("/")
    for i, frame in enumerate(frames_list):
        if len(frame) == 2:
            if frame == "X":
                score += 30
            else:
                first_roll = int(frame[0])
                score += first_roll + int(frames_list[i+1].split("-")[0]) 
        elif len(frame) > 1 and frame[0] != "-":
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll == 10:
                score += 10 + int(frames_list[i+1].split("-")[0])
            else:
                score += first_roll + second_roll
        elif len(frame) > 1 and frame[0] == "-":
            first_roll = int(frame[1:])
            score += 10 + first_roll
    return score