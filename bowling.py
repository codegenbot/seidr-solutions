def bowling(string):
    score = 0
    frames = [0]*10
    frame_index = 0
    frame_count = 0

    for char in string:
        if char == 'X':
            frames[frame_index] += 10
            frame_count += 1
            if frame_count == 2:
                frame_index += 1
                frame_count = 0
        elif char == '/':
            frames[frame_index] += 10 - frames[frame_index-1]
            frame_index += 1
            frame_count = 0
        elif char == '-':
            frame_count += 1
            if frame_count == 2:
                frame_index += 1
                frame_count = 0
        else:
            frames[frame_index] += int(char)

            if frame_count == 1 and (frames[frame_index] == 10 or frames[frame_index] + frames[frame_index-1] == 10):
                frame_index += 1
                frame_count = 0
            elif frame_count == 0:
                frame_count = 1

    for i in range(10):
        score += frames[i]

    return score