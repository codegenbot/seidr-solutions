def bowling_game(score):
    frames = score.split("/")
    total_score = 0
    for i in range(len(frames)):
        if frames[i] == "X":
            if i < 9:
                total_score += 30
            else:
                total_score += int(frames[i - 1]) + 10
        elif len(frames[i]) > 1 and frames[i][0] == str(int(frames[i][0])):
            total_score += (int(frames[i][0]) * 2) + 10
        else:
            total_score += int(frames[i])
    return total_score