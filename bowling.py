def calculate_bowling_score(bowls):
    frame_scores = []
    frame = 1
    score = 0
    i = 0

    while frame <= 10 and i < len(bowls):
        if bowls[i] == 'X':
            frame_scores.append(10)
            score += 10
            i += 1
        elif bowls[i] == '/':
            frame_scores.append(10 - frame_scores[-1])
            score += 10 - frame_scores[-1]
            i += 1
        else:
            frame_scores.append(int(bowls[i]))
            score += int(bowls[i])
            i += 1

            if len(frame_scores) > 1 and frame_scores[-2] + frame_scores[-1] == 10:
                score += frame_scores[-1]
            
            if len(frame_scores) > 2 and frame_scores[-3] == 10:
                score += frame_scores[-1]
            
            if len(frame_scores) > 3 and frame_scores[-4] == 10:
                score += frame_scores[-1]
            
        if bowls[i-1] == 'X' or i == len(bowls):
            frame += 1

    return score


# Read input from user and call the function
bowls = input()
print(calculate_bowling_score(bowls))