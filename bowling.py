Here is the completed code:

def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for frame in frames:
        if len(frame) > 1 and frame[0].isdigit() and frame[1] == 'X':
            score += 30
            continue
        elif len(frame) > 1 and frame[0].isdigit():
            strike = int(frame[0])
            score += strike + 10
            roll += 2
        elif frame == 'X':
            score += 10
            roll += 1
        else:
            parts = list(map(int, frame.split()))
            if len(parts) > 1 and parts[0] + parts[1] < 11:
                score += sum(parts)
                roll += 2
            elif len(parts) == 1:
                score += parts[0]
                roll += 1
    for i in range(roll):
        if i % 2 == 0:
            score += 10
        else:
            score += int(frames[i//2+1][:1])
    return score