def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        frame_score = 0
        rolls = list(map(int, frame.split('+')))
        if len(rolls) == 1:
            frame_score = rolls[0] * 10
        elif len(rolls) == 2:
            if sum(rolls) == 10:
                if len(frames.split('/')[frames.index(frame)+1].split('+')) > 1:
                    next_frame_rolls = list(map(int, frames.split('/')[frames.index(frame)+1].split('+')))
                    while len(next_frame_rolls) > 1:
                        next_frame_score = sum(next_frame_rolls)
                        next_frame_rolls = [x for x in next_frame_rolls if int(x) != 0]
                        frame_score += min(10, 10 - (next_frame_score - 10))
                    if len(next_frame_rolls) > 1:
                        next_frame_score += sum(next_frame_rolls)
            else:
                frame_score = sum(rolls)
        score += frame_score
    return score