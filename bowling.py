```
def bowling_score(frames):
    score = 0
    frame_index = 0
    while frame_index < len(frames):
        if frames[frame_index] == 'X':
            score += 10
            frame_index += 1
            if frame_index < len(frames) and (frames[frame_index:frame_index+2].replace('-', '/') in ['10/', '11/']):
                score += int(frames[frame_index:frame_index+2].replace('-', '/').split('/')[0])
                frame_index += 2
        elif '/' in frames[frame_index]:
            parts = frames[frame_index].split('/')
            score += int(parts[0]) + int(parts[1])
            frame_index += 2
        else:
            score += sum(int(x) for x in frames[frame_index])
            frame_index += 1
    return score