```
def bowling_score(frames):
    score = 0
    roll_count = 1
    for frame in frames.split('/'):
        if frame == 'X':
            if roll_count < 2:
                score += 30
            else:
                score += 10 + 30
            roll_count += 1
        elif frame == '10':
            score += 20
            roll_count += 2
        elif frame.isdigit():
            if int(frame) > 9:
                return -1  # invalid input
            score += int(frame)
            roll_count += 1
        else:
            strike, spare = 0, 0
            for i, char in enumerate(frame):
                if char == 'X':
                    if i == 0:
                        strike = 30
                    elif i == 1:
                        strike = 20 + 10
                elif char.isdigit():
                    spare = int(char) * 10
            score += strike + spare
            roll_count += 2
    return score