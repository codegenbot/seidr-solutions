Here is the solution:

def bowling_game(bowling_game_input):
    game = [int(x) for x in re.sub('/|-', '', bowling_game_input)]
    score = 0
    roll = 0
    for frame in range(1, 11):
        if game[roll] == 10:
            score += game[roll]
            roll += 1
        else:
            first_roll = game[roll]
            if game[roll+1:roll+3].count(str(game[roll])) == 2:
                score += game[roll] + game[roll+1]
                roll += 2
            elif frame < 10 and (game[roll+1] + game[roll+2]) >= 10:
                score += first_roll + game[roll+1]+game[roll+2]
                roll += 3
            else:
                score += first_roll + game[roll+1]
                roll += 2
    return score