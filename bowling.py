def bowling_score(score):
    score = score.replace("/", "-0")
    total_score = 0
    frame_score = 0
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            temp = int(score[i:])
            if temp == 10:
                frame_score += 30
            elif temp >= 10 and score[i+1] == "X":
                frame_score += 20 + int(score[:i])
            else:
                frame_score += temp
        elif score[i] == "X":
            frame_score += 30
        total_score += frame_score
        if i < len(score):
            frame_score = 0
    return total_score