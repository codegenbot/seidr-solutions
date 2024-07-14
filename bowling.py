def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game + 'X':
        if char.isdigit():
            if len(char) == 1:
                strike = False
                if roll < 2:
                    score += int(char)
                    roll += 1
                else:
                    score += int(char) + (10 - roll)
                    break
            elif len(char) == 2:
                if char[0] == 'X':
                    strike = True
                else:
                    score += int(char[0])
                    roll += 1
        else:
            if not strike and roll < 2:
                score += int(char[0])
                roll += 1
            elif strike and roll < 3:
                score += int(char[0]) + (10 - roll)
                break
            frame += 1
    return score