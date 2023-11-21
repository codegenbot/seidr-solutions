import re

def calculate_score(bowls):
    frames = re.findall(r"(\d|X|/|-)", bowls)
    score = 0
    frame_index = 0

    for i in range(10):
        if frames[frame_index] == 'X':
            score += 10 + get_frame_score(frames, frame_index + 1, 2)
            frame_index += 1
        elif frames[frame_index + 1] == '/':
            score += 10 + get_frame_score(frames, frame_index + 2, 1)
            frame_index += 2
        else:
            score += get_frame_score(frames, frame_index, 2)
            frame_index += 2

    return score

def get_frame_score(frames, start_index, num_rolls):
    score = 0
    for i in range(num_rolls):
        if frames[start_index + i] == 'X':
            score += 10
        elif frames[start_index + i] == '/':
            score += 10 - int(frames[start_index + i - 1])
        elif frames[start_index + i] == '-':
            score += 0
        else:
            score += int(frames[start_index + i])
    return score

bowls = input()
print(calculate_score(bowls))