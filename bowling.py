```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[frame - 1] == 'X':
            score += 30
            frame += 1
        elif '/' in game[frame - 1]:
            parts = game[frame - 1].split('/')
            score += int(parts[0]) + int(parts[1])
            frame += 2
        else:
            for i, c in enumerate(game[frame - 1]):
                if c == 'X':
                    score += 10 + (10 - i)
                    break
                elif c != ' ':
                    score += int(c) * 10 // len(game[frame - 1])
            frame += 1
    return score