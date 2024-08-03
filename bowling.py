```
def bowling_score(s):
    score = 0
    roll = 0
    frame_count = 0
    for char in s:
        if char.isdigit():
            roll += int(char)
        elif char == '/':
            score += (10 - roll) * (frame_count < 9)
            roll = 0
            frame_count += 1
        else: 
            score += max(roll, 10) * (frame_count < 9)
            if roll >= 10:
                score += (10 - roll) * (frame_count == 9)
            roll = 0
            frame_count += 1
    score += min(roll, 10) * (frame_count < 10)
    return score