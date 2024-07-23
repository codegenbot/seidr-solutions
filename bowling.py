def bowling_score(game):
    score = 0
    frames = game.split('/')
    for i, frame in enumerate(frames):
        if frame.isdigit():
            roll1, roll2 = map(int, frame.split('-'))
            if roll1 == 10:
                score += 10 + (roll1 + roll2 if i < 9 else 0)
            elif roll1 + roll2 == 10:
                score += 10
                if i < 9:
                    score += roll2
            else:
                score += roll1 + roll2
        elif frame == 'X':
            score += 10 + (20 if i < 9 else 0)
        elif frame[0] == 'X' and len(frame) > 1:
            score += 10 + int(frame[1]) + (30 if i < 9 else 0)
        elif frame[0] == '/':
            score += int('1' + frame[1:])
    return score