```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            frame = int(frames[i])
        else:
            if '/' in frames[i]:
                strike = True
            else:
                spare = True
            score += get_frame_score(frame, strike, spare)
        if i < len(frames) - 1 and frames[i+1] == 'X':
            score += 10
    return score

def get_frame_score(frame, strike, spare):
    if strike:
        return 10 + get_next_two_scores()
    elif spare:
        return 10 + int(frame)
    else:
        return frame

def get_next_two_scores():
    frames = ''
    i = 0
    while True:
        if len(frames) == 2:
            break
        frames += next_frame()[1]
        i += 1
    return sum([int(x) for x in frames])

def next_frame():
    frame = input()
    while not is_valid_frame(frame):
        frame = input()
    return frame, True

def is_valid_frame(frame):
    if len(frame) > 2:
        return False
    for char in frame:
        if char not in '0123456789X/-':
            return False
    return True