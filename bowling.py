```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(10):
        if '/' in frames[frame_index:frame_index+2]:
            strike, spare = map(int, frames[frame_index:frame_index+2].split('/'))
            if i < 9:
                score += strike + spare
            else:
                score += strike + min(spare, 10 - strike)
            frame_index += 2
        elif frames[frame_index] == 'X':
            score += 10
            frame_index += 1
        else:
            score += sum(map(int, frames[frame_index:frame_index+2]))
            frame_index += 2
    return score