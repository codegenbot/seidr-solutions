```
def bowling_score(frames):
    score = 0
    frame_index = 0
    while frame_index < len(frames):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index] in ['/', '-']:
            score += int(frames[:frame_index].count('X')) * 10 + int(frames[frame_index-1: frame_index])
            frame_index += 1
        else:
            strike_count = 0
            while frames[frame_index] != 'X' and frames[frame_index] != '/' and frames[frame_index] != '-':
                score += int(frames[frame_index])
                frame_index += 1
            if frames[frame_index] == 'X':
                score += 10 + int(frames[:frame_index].count('X')) * 10
                strike_count += 1
            elif frames[frame_index] in ['/','-']:
                score += 10 + int(frames[:frame_index-1].count('X')) * 10
                frame_index += 1
            else:
                if strike_count > 0:
                    score += int(frames[frame_index])
                    frame_index += 1
        return score