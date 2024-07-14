```
def bowling_score(frames):
    total = 0
    frame_index = 0
    for i in range(10):
        if frames[frame_index] == 'X':
            total += 30
            frame_index += 1
        elif '/' in frames[frame_index:frame_index+2]:
            first_roll, second_roll = map(int, re.split('/', frames[frame_index:frame_index+2]))
            total += first_roll + second_roll
            frame_index += 2
        else:
            first_roll = int(frames[frame_index])
            total += first_roll
            if first_roll == 10:
                frame_index += 1
            else:
                frame_index += 1
                if frames[frame_index] == 'X':
                    total += 10 + 10
                    frame_index += 1
                elif '/' in frames[frame_index:frame_index+2]:
                    second_roll = int(frames[frame_index]) + int(frames[frame_index+1])
                    total += 10 + second_roll
                    frame_index += 2
                else:
                    total += 10 + first_roll
                    frame_index += 1
    return total