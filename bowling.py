def calculate_bowling_score(round_string):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if round_string[i] == 'X':
            score += 10
            if round_string[i+2] == 'X':
                score += 10
            elif round_string[i+2] == '/':
                score += 10 - int(round_string[i+1])
            else:
                score += int(round_string[i+1]) + int(round_string[i+2])
            i += 1
        elif round_string[i+1] == '/':
            score += 10
            if round_string[i+2] == 'X':
                score += 10
            else:
                score += int(round_string[i+2])
            i += 2
        else:
            score += int(round_string[i]) + int(round_string[i+1])
            i += 2
        frame += 1
    return score

round_string = input()
print(calculate_bowling_score(round_string))