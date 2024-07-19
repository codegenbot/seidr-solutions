def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            pins = int(game[i:i+2])
            if pins < 10:
                score += pins
            else:
                if frame < 9:
                    score += 10
                else:
                    score += pins
                if i > 0:
                    score += int(game[i-2:i])
        elif game[i] == 'X':
            score += 10
            if frame < 9:
                score += 10
        elif game[i] == '/':
            left_pins = int(game[i-1])
            score += 10 - left_pins
            if i > 0:
                score += int(game[:i-2])
        frame += (pins >= 10)