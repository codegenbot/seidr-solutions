```
def bowling_score(game):
    score = 0
    roll = 0
    frame = [0, 0]
    for char in game:
        if char == 'X':
            score += 30
            roll += 2
        elif char == '/':
            score += sum(frame)
            frame = [0, 0]
            roll = 0
        else:
            frame[int(char)] = int(char)
            roll += 1
    if any(f for f in frame):
        if all(f > 0 for f in frame):
            score += sum(frame)
        elif frame[0] > 0 and frame[1] == 0:
            score += frame[0]
        else:
            score += min(frame[0], 10) + 10
    return score