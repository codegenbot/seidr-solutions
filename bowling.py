```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            current_frame = ""
            while i < len(game) and game[i].isdigit():
                current_frame += game[i]
                i += 1
            if '/' in current_frame:
                strike, spare = map(int, current_frame.split('/'))
                if frame == 10:
                    score += strike + spare
                else:
                    if strike == 10:
                        score += 10 + strike
                    elif strike > spare:
                        score += 10 + spare
                    else:
                        score += 10 + strike
                frame += 1
            else:
                current_frame = int(current_frame)
                score += current_frame
                if frame < 9 and game[i].isdigit():
                    i -= 1
                frame += 1
    return score