def calculate_bowling_score(bowls):
    frames = []
    i = 0
    while i < len(bowls):
        if bowls[i] == 'X':
            frames.append(10)
        elif bowls[i] == '/':
            frames.append(10 - frames[-1])
        else:
            frames.append(int(bowls[i]))
        i += 1
    
    score = 0
    frame_index = 0
    for _ in range(10):
        if frames[frame_index] == 10:
            score += 10 + frames[frame_index + 1] + frames[frame_index + 2]
            frame_index += 1
        elif frames[frame_index] + frames[frame_index + 1] == 10:
            score += 10 + frames[frame_index + 2]
            frame_index += 2
        else:
            score += frames[frame_index] + frames[frame_index + 1]
            frame_index += 2
    
    return score

bowls = input().strip()
print(calculate_bowling_score(bowls))