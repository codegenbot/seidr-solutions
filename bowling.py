def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
            if frame < 10:
                if bowls[i + 2] == "/":
                    score += 10
                else:
                    score += 10 if bowls[i + 1] == "X" else int(bowls[i + 1])
        elif bowls[i] == "/":
            score += 10 - int(bowls[i - 1])
            if frame < 10:
                score += 10 if bowls[i + 1] == "X" else int(bowls[i + 1])
        else:
            score += int(bowls[i])
        frame_score += int(bowls[i]) if bowls[i] != "X" else 10
        if frame < 10 and (frame_score == 10 or len(frame_score) == 2):
            frame_score = 0
            frame += 1
    return score


bowls = input()
print(bowling_score(bowls))