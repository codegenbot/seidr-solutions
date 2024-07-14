def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            knocked_down = 30
            frame += 1
        elif frames[i] == "/":
            knocked_down = 10 + int(frames[i-1])
            frame += 1
        else:
            knocked_down = int(frames[i:i+2]) if frames[i] != "0" else 10 + int(frames[i+1])
            frame += 1
        score += knocked_down
    return score