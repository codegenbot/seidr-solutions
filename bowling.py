Here is the solution:

def bowling_score(input_string):
    score = 0
    for i in range(0, len(input_string), 2):
        if input_string[i].isdigit():
            strike = False
            if input_string[i+1] == 'X':
                strike = True
                score += 10 + (10 * (len(input_string) - i - 1))
            else:
                score += int(input_string[i]) + int(input_string[i+1])
        elif input_string[i] == '-':
            continue
        else:
            score += int(input_string[i])

    return score