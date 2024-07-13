```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[2*frame-2:2*frame] == 'X':
            score += 30
            frame += 1
        elif game[2*frame-2:2*frame].isdigit():
            if len(game[2*frame-2:2*frame]) > 1:
                first, second = int(game[2*frame-2]), int(game[2*frame])
                score += first + second
                frame += 1
            else:
                score += int(game[2*frame-2])
                frame += 1
        elif game[2*frame-2:2*frame] == '//':
            score += 10
            frame += 1
        elif '/' in game[2*frame-2:2*frame]:
            first, second = int(game[2*frame-2]), int(game[2*frame])
            if first + second > 10:
                score += 10
            else:
                score += first + second
            frame += 1
    return score