```
def bowling_score(bowling_game):
    score = 0
    frame = 1
    for i in range(0, len(bowling_game), 2):
        if bowling_game[i].isdigit():
            pins = int(bowling_game[i])
        else:
            pins = 10
        if bowling_game[i+1].isdigit():
            extra_pins = int(bowling_game[i+1])
        else:
            extra_pins = 0
        if frame == 9 and (pins + extra_pins) < 10:
            score += 10
            frame += 1
        elif pins + extra_pins == 10:
            score += 10
            frame += 1
        else:
            score += pins + extra_pins
            frame += 1
    return score