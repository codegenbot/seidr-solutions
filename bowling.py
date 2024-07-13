def bowling_game(s):
    score = 0
    frames = s.split("/")
    for i in range(len(frames)):
        if frames[i].isdigit():
            score += int(frames[i])
        else:
            score += 10
    return score