```
def bowling_score(games):
    frames = games.split('/')
    score = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif frame[0] == 'X':
            score += 10 + int(frames[i+1][:2]) if i < 9 else 25
        elif frame[0] == 'S':
            score += 10 + int(frames[i+1][:1])
        else:
            score += sum(map(int, frame)) + (10 - len(frame)) * 10 if i < 9 else 20
    return score