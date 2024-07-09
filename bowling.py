```
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
                next_rolls = game[game.index(frame) + len(frame):].split('/', 1)[0]
                if first + second == 10:
                    if 'X' in next_rolls or '/' in next_rolls:
                        score += 10
                    else:
                        score += int(next_rolls)
                elif 'X' in frame and 'X' in next_rolls:
                    score += 20
                elif 'X' in frame and '/' in next_rolls:
                    score += 15
                else:
                    first_roll, second_roll = map(int, next_rolls.split(' ')[0].split('-'))
                    if second_roll == 'X':
                        score += 10 + max(first_roll, int(next_rolls[9:]))
                    elif second_roll == '/':
                        score += 10 + first_roll
                    else:
                        score += 10 + first_roll + second_roll
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