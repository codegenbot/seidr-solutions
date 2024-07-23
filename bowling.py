def bowling_score(game):
    game = game.replace('/', '')
    score = 0
    roll_index = 0

    for i in range(1, 11): 
        if game[roll_index:roll_index+2] == 'X': 
            score += 10
            roll_index += 1
            if i < 10:
                score += int(game[roll_index:roll_index+2]) + int(game[roll_index+1:roll_index+3])
                roll_index += 2
        elif '/' in game[roll_index:]: 
            frame = [int(x) for x in game[roll_index:].split(' ')[0].split('-')]
            score += sum(frame)
            roll_index += len(str(frame)) + 1
        else:
            if i < 10:
                score += int(game[roll_index:])
                roll_index += len(str(int(game[roll_index:])))
            else:
                score += int(game[roll_index:])

    return score