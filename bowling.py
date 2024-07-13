```
def calculate_score(frames):
    score = 0
    frame_number = 1

    for i in range(len(frames)):
        frame = frames[i]

        if len(frame) == 2:
            first_roll, second_roll = map(int, frame.split('-'))
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                if frame_number < 9 and frames[i+1][0] != '/':
                    if frames[i+1].split()[0] == 'X':
                        score += 10
                    else:
                        score += int(frames[i+1].split()[1]) + int(frames[i+1].split()[2])
                frame_number += 1
            elif first_roll == 10 or second_roll == 10:
                if first_roll == 10:
                    score += 10 + int(frames[i+1].replace('/', '')[1:])
                else:
                    score += 10 + int(frames[i+2].replace('/', '' )[1:])
            else:
                score += first_roll + second_roll
        elif len(frame) == 1:
            if frame[0] == 'X':
                score += 10
                if frame_number < 9 and frames[i+1][0] != '/':
                    if frames[i+1].split()[0] == 'X':
                        score += 10
                    else:
                        score += int(frames[i+1].split()[1]) + int(frames[i+1].split()[2])
            frame_number += 1
        elif frame[0] == 'X' and len(frame) > 1:
            if frame.replace('/', '')[1:] == '10':
                score += 10 + 5
            else:
                score += 10 + int(frame.replace('/', '' )[1:])
        else:
            first_roll = int(frame.split()[0])
            second_roll = int(frame.split()[2])
            score += first_roll + second_roll

    return score

print(calculate_score("X1-1681357-0/XX7/4"))