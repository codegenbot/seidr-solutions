def bowling_game(s):
    score = 0
    frame = 1
    in_play = 0

    for c in s:
        if c.isdigit():
            num = int(c)
            if num == 10:
                score += 10 + 10
                frame += 1
            else:
                if in_play < 2:
                    if in_play == 1:
                        score += min(num, 10 - in_play) * 2
                    elif num < 10 - in_play:
                        score += num
                    else:
                        score += 10 - in_play + num
                else:
                    if num == 0:
                        break
                    score += num
            in_play = (in_play + 1) % 2
        else:
            if c == "X":
                score += 30
                frame += 1
            elif c == "/":
                score += 10 - in_play
                frame += 1
                in_play = 0

    return score