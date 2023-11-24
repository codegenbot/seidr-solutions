def bowling_score(frames):
    score = 0
    frame_index = 0

    for frame in range(10):
        if frames[frame_index] == 'X':
            score += 10 + get_strike_bonus(frames, frame_index)
            frame_index += 1
        elif frames[frame_index+1] == '/':
            score += 10 + get_spare_bonus(frames, frame_index)
            frame_index += 2
        else:
            score += get_frame_score(frames, frame_index)
            frame_index += 2

    return score


def get_strike_bonus(frames, frame_index):
    bonus = 0
    if frames[frame_index+2] == '/':
        bonus = 10
    else:
        bonus = get_frame_score(frames, frame_index+1)
    return bonus


def get_spare_bonus(frames, frame_index):
    return 10 - get_frame_score(frames, frame_index)


def get_frame_score(frames, frame_index):
    score = 0
    if frames[frame_index] != '-':
        score += int(frames[frame_index])
    if frames[frame_index+1] != '-':
        score += int(frames[frame_index+1])
    return score


frames = input()
print(bowling_score(frames))