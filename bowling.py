def bowling_score(game):
    game = game.replace('/','-1') 
    game = game.replace('X','-11')
    score = 0
    i = 0
    while i < len(game):
        if game[i] == '-':
            try:
                frame_score = int(game[i+1:i+3])
            except ValueError:
                frame_score = 10
            if i + 2 >= len(game):
                score += frame_score
            else:
                score += frame_score
            i+=2
        elif game[i] == '-11':
            score += 10
            i+=2
        else:
            try:
                pin1 = int(game[i])
                i+=1
                if i < len(game) and game[i].isdigit():
                    pin2 = int(game[i])
                    score += pin1 + pin2
                    i+=1
                else:
                    score += pin1
            except ValueError:
                pass
    return score