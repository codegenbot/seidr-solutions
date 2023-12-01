def calculate_bowling_score(game_string):
    score = 0
    frame = 1
    roll = 0
    frames = [[] for _ in range(10)]
    
    for char in game_string:
        if char == 'X':
            frames[frame-1].append(10)
            if frame < 10:
                frame += 1
            if roll == 1:
                roll = 0
        elif char == '/':
            frames[frame-1].append(10 - frames[frame-1][-1])
            if frame < 10:
                frame += 1
            if roll == 1:
                roll = 0
        elif char == '-':
            frames[frame-1].append(0)
            if roll == 1:
                roll += 1
        else:
            frames[frame-1].append(int(char))
            if roll == 0:
                roll += 1
            else:
                frame += 1
                roll = 0
    
    for i in range(10):
        frame_score = sum(frames[i])
        if i < 9:
            if frames[i][0] == 10:
                if frames[i+1][0] == 10:
                    frame_score += frames[i+1][0] + frames[i+2][0]
                else:
                    frame_score += frames[i+1][0] + frames[i+1][1]
            elif sum(frames[i]) == 10:
                frame_score += frames[i+1][0]
        score += frame_score
    
    return score