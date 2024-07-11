```
def bowling_score(games):
    score = 0
    frame = 1
    for char in games + 'X':
        if char.isdigit():
            count = int(char)
            while count > 0 and frame < 10:
                if count >= 2:
                    score += 10
                    frame += 1
                    count -= 2
                else:
                    score += count
                    frame += 1
                    count = 0
            if frame == 10:
                break
        elif char == 'X':
            if frame < 9:
                score += 10
                frame += 1
            else:
                score += 10
                while frame < 10 and games[frames.index(char) - 1].isdigit():
                    count = int(games[frames.index(char) - 1])
                    while count > 0 and frame < 10:
                        if count >= 2:
                            score += 10
                            frame += 1
                            count -= 2
                        else:
                            score += count
                            frame += 1
                            count = 0
        elif char == '/':
            count = int(games[:games.index(char)].count('X')) + int(games[:games.index(char)].count(str(int(games[:games.index(char)]) - 10)))
            if count >= 10:
                score += 10
            else:
                score += count
    return score