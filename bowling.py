```
def bowling_score(game):
    frames = game.split('/')
    total_score = 0
    frame_number = 1
    for i in range(len(frames)):
        frame = frames[i]
        if len(frame) == 1:
            total_score += 10
        elif 'X' in frame:
            if frame_number < 9 and frames[i+1][0] != 'X':
                if frames[i+1][0] == 'X':
                    total_score += 10 + int(str(frame.replace('X', ''))[1:])
                else:
                    total_score += 10 + int(frames[i+1].replace('X', '', 1)) + int(str(frame.replace('X', ''))[1:])
            else:
                total_score += 10
        elif '-' in frame:
            first_roll, second_roll = map(int, frame.split('-'))
            if first_roll == 10:
                total_score += 10 + int(frames[i+2].replace('X', '', 1)) + int(str(frame.replace('-', ''))[1:])
            else:
                total_score += first_roll + second_roll
        else:
            first_roll, second_roll = map(int, frame.split())
            if first_roll == 10:
                total_score += 10 + int(frames[i+2].replace('X', '', 1)) + int(str(frame.replace(' ', ''))[1:])
            elif second_roll == 10:
                total_score += 10 + first_roll + second_roll
            else:
                total_score += first_roll + second_roll
        frame_number += 1
    return total_score

print(bowling_score("X1-1681357-0/XX7/4"))