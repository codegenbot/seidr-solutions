Here is the solution:

def bowling_score(bowling_input):
    score = 0
    frame_number = 1
    for i in range(0, len(bowling_input), 2):
        if bowling_input[i:i+2] == "X":
            score += 10 + (10 - int(bowling_input[i-1])) if frame_number < 9 else 25
            frame_number += 1
        elif bowling_input[i:i+2].isdigit():
            strike = int(bowling_input[i:i+2])
            score += strike
            if frame_number == 10:
                return score
            if strike == 10:
                for j in range(i+2, len(bowling_input), 2):
                    if bowling_input[j:j+2] != "X":
                        score += int(bowling_input[j:j+2])
                    else:
                        score += strike + 10 - int(bowling_input[i-1])
                        return score
            frame_number += 1
        else:
            first_roll, second_roll = int(bowling_input[i]), int(bowling_input[i+1])
            if first_roll + second_roll == 10:
                score += first_roll
                frame_number += 1
            elif first_roll > 0 and second_roll > 0:
                score += first_roll + second_roll
                frame_number += 1
    return score