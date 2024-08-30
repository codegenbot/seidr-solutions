frames = input("Enter the individual bowls (e.g., 1/2X/3-4/5-X etc.): ")
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1:
            score += 10
        elif 'X' in frame:
            if i < 9:
                score += 30
            else:
                score += 10 + 10 * (int(frame.replace('X', '')) - 2)
        else:
            strike = int(frame[0])
            spare = int(frame[1])
            if i < 9:
                score += strike + spare + 10
            else:
                score += strike + spare
    return score