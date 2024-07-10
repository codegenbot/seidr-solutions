def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_num = 0
    frame_score = [0] * 10

    for bowl in bowls:
        if bowl == "X":
            score += 10
            if frame < 10:
                frame_score[frame] = 10
                if frame > 1 and bowls[bowl_num - 1] == "X":
                    score += 10
                    if frame > 2 and bowls[bowl_num - 2] == "X":
                        score += 10
        elif bowl == "/":
            score += 10 - int(bowls[bowl_num - 1])
            if frame < 10:
                frame_score[frame] = 10
        elif bowl == "-":
            pass
        else:
            score += int(bowl)
            if frame < 10:
                frame_score[frame] += int(bowl)

        if bowl_num > 0 and (bowls[bowl_num - 1] == "X" or bowls[bowl_num - 1] == "/"):
            score += int(bowl)

        if bowl == "X" or frame_score[frame] == 10 or bowl_num % 2 == 1:
            frame += 1

        bowl_num += 1

    return score


bowls = input().strip()
print(bowling_score(bowls))