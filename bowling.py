```
def bowling_score(game):
    score = 0
    frame = 1
    for char in game + 'X':
        if char.isdigit():
            first_roll = int(char)
            if frame == 10:
                if len(game) >= 3 and str(first_roll * 2).endswith(char):
                    score += first_roll * 2
                else:
                    score += first_roll
            elif game[frame-1].isdigit() or (frame > 1 and game[frame-2].isdigit()):
                if frame < 10:
                    if len(game) >= 3 and str(first_roll + int(game[frame-1])).endswith(char):
                        score += first_roll + int(game[frame-1])
                    else:
                        score += first_roll
            frame += 1
    return score