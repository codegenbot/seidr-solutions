def bowling_score(frames):
    score = 0
    frame_index = 0
    
    for _ in range(10):
        if frames[frame_index:frame_index+2] == 'X ' * 2:
            score += 30
            frame_index += 2
        elif frames[frame_index:frame_index+3].count('/') == 1:
            parts = frames[frame_index:frame_index+3].split('/')
            score += int(parts[0]) + int(parts[1])
            frame_index += 3
        else:
            if frames[frame_index] == 'X':
                score += 10
                frame_index += 1
            else:
                parts = frames[frame_index:frame_index+2].split('/')
                score += sum(map(int, parts))
                frame_index += 2
            
    return score