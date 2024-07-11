def bowling_score(game):
    score = 0
    frames = game.upper().split('/')
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif 'X' in frame:
            if i < 9: 
                first_roll = int(frames[i-1].split()[0])
                score += 10 + first_roll
            else: 
                score += 10
        elif '/' in frame and len(frame) > 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls)
            else:
                score += sum(first_two_rolls)
        elif len(frame) == 2:
            rolls = list(map(int, frame.split()))
            if rolls[0] + rolls[1] > 10:
                score += 10
            else: 
                score += sum(rolls)
    return score