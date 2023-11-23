def calculate_score(bowls):
    score = 0
    frame = 1
    frame_index = 0
    frames = [[0, 0] for _ in range(10)]

    for bowl in bowls:
        if bowl == 'X':
            score += 10
            frames[frame_index].append(10)
            frame_index += 1
            if frame_index == 10:
                break
        elif bowl == '/':
            score += 10 - frames[frame_index][-1]
            frames[frame_index].append(10 - frames[frame_index][-1])
            frame_index += 1
            if frame_index == 10:
                break
        elif bowl == '-':
            frames[frame_index].append(0)
        else:
            score += int(bowl)
            frames[frame_index].append(int(bowl))
            if len(frames[frame_index]) == 3:
                frame_index += 1
                if frame_index == 10:
                    break

    for i in range(10):
        frame_score = sum(frames[i]) + frames[i][0] + frames[i][1]
        if len(frames[i]) == 2 and frame_score == 10:
            if frames[i][0] == 10 or frames[i][1] == 10:
                score += frames[i+1][0]
        elif len(frames[i]) == 3 and frames[i][0] == 10:
            if frames[i][1] == 10:
                score += 10
            elif frames[i][1] == 10 - frames[i][2]:
                score += 10 - frames[i][2]
            else:
                score += frames[i][1]

    return score

bowls = input()
print(calculate_score(bowls))