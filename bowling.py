```python
def bowling_score(game):
    score = 0
    roll = 0
    game += 'X' * (10 - len(game.split('/')))
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10 + roll
            roll = 0
        elif len(frame) == 2:
            if frame[0] == 'X':
                score += 10
                roll = int(frame[1])
            elif frame[1] == 'X':
                score += int(frame[0]) + 10
                roll = 0
            else:
                score += sum(map(int, frame))
        else:
            if frame[0] == 'X':
                score += 10
                first_roll = int(frame[2])
                second_roll = int(frame[3])
                roll = first_roll + second_roll
            elif frame[1] == 'X':
                score += 10 + roll
                roll = 0
            else:
                score += sum(map(int, frame))
        if len(frame) > 1 and int(frame[0]) + int(frame[1]) == 10:
            roll = int(frame[2])
    return score