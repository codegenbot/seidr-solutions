```
def bowling_score(games):
    score = 0
    current_game = [0, 0]
    for i in range(len(games)):
        if games[i].isdigit():
            current_game[1] = int(games[i])
        else:
            if games[i] == 'X':
                current_game[0], current_game[1] = 10, 10
            elif games[i] == '-':
                continue
            else:
                current_game[1] = int(games[i])
            score += sum(current_game)
            if sum(current_game) == 10:
                current_game = [0, 0]
    return score