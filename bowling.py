```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:
            strike = int(frame[0])
            score += strike + 10
            roll += 1
            if roll < 9 and game[game.index(frame) + 3:6].isdigit():
                next_roll = int(game[game.index(frame) + 3:6])
                if next_roll == 10:
                    score += 15
                    roll += 2
                else:
                    score += strike + next_roll
            elif roll < 9 and game[game.index(frame) + 4:].isdigit():
                next_two_rolls = [int(x) for x in game[game.index(frame) + 4:6]]
                if sum(next_two_rolls) == 10:
                    score += strike + sum(next_two_rolls)
                    roll += 2
                else:
                    score += strike + sum(next_two_rolls)
    return score