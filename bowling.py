def bowling_score(game):
    score = 0
    frame = 0
    roll = 0
    for char in game:
        if char != "/":
            if char == "X":  
                score += 30
                frame += 1
                roll = 2
            else:  
                score += int(char)
                roll += 1
        else:
            if roll == 2:  
                score += 10 + int(game[game.index("/") - 1])
            frame += 1
            roll = 0
    return score