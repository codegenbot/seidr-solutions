def calculate_score(bowls):
    score = 0
    frame = 1
    frame_index = 0
    while frame <= 10:
        if bowls[frame_index] == 'X':
            score += 10
            if frame_index + 2 < len(bowls):
                if bowls[frame_index + 2] == 'X':
                    score += 10
                elif bowls[frame_index + 2] == '/':
                    score += 10 - int(bowls[frame_index + 1])
                else:
                    score += int(bowls[frame_index + 1]) + int(bowls[frame_index + 2])
            frame_index += 1
        elif bowls[frame_index] == '/':
            score += 10 - int(bowls[frame_index - 1])
            if frame_index + 1 < len(bowls):
                if bowls[frame_index + 1] == 'X':
                    score += 10
                else:
                    score += int(bowls[frame_index + 1])
            frame_index += 1
        else:
            score += int(bowls[frame_index])
        frame += 1
        frame_index += 1
    return score

bowls = input()
print(calculate_score(bowls))