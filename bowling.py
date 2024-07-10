def bowling_score(game):
    score = 0
    roll = 0
    frames = [list(map(int, frame.split())) for frame in game.upper().split('/')]
    for frame in frames:
        if len(frame) == 1: 
            score += 10
            roll += 1
        elif sum(frame) == 10:
            score += sum(frame)
            roll += 2
        else:
            if len(frame) == 2 and frame[0] + frame[1] > 10:
                first_roll = frame[0]
                second_roll = 10 - first_roll
                score += sum(frame)
                roll += 2
                next_frame = frames[frames.index(list(map(int, str(second_roll).split()))) + 1]
                if len(next_frame) == 1:
                    score += 10
                    roll += 1
                else:
                    score += sum(next_frame[:2])
                    roll += 2
            else:
                score += sum(frame)
                roll += 2
    return score