def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first, second = map(int, frame)
            score += first + second
            roll += 1
        else:
            first, second = map(int, frame[:2])
            score += first + second
            if first + second >= 10:
                next_rolls = game[3:].split('/', 1)[0]
                next_first = int(next_rolls[0]) if len(next_rolls) > 0 and len(next_rolls) <= 2 else 10
                if first + second == 10:
                    score += next_first
                    roll += 1
                else:
                    score += 10
            else:
                third = int(frame[2])
                if third == 'X':
                    next_rolls = game[3:].split('/', 1)[0]
                    score += 10 + max(int(roll) for roll in next_rolls)
                elif third == '/':
                    score += 10
                else:
                    score += third
            roll += 1
    return score