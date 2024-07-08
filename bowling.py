```Python
def calculate_score(frames):
    score = 0
    for i in range(len(frames)):
        frame = frames[i]
        if len(frame) == 2:
            strike = True
        elif len(frame) >= 3 and 'X' in frame:
            spare = True
        else:
            strike = False
            spare = False

        if strike:
            score += 10 + calculate_score(frames[i+1:i+2])
        elif spare:
            score += 10 + sum(map(int, filter(str.isdigit, frame)))
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1]) if len(frame) > 1 else 0
            score += first_roll + second_roll

    return score

user_input = input()
frames = [frame.replace("-", "") for frame in user_input.split("\n")]
print(calculate_score(frames))