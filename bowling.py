def calculate_bowling_score(input_string):
    input_string = input_string.replace('/', '')
    total_score = 0
    frame = 1
    for i in range(0, len(input_string), 2):
        if input_string[i] == 'X':
            if i < len(input_string) - 1 and input_string[i+1] != 'X':
                total_score += 10 + (10 - int(input_string[i+1]))
            else:
                total_score += 10
            frame += 1
        elif input_string[i] == '-':
            first_roll = 10 - int(input_string[i-1])
            if i < len(input_string) - 2 and input_string[i+2] != 'X':
                total_score += first_roll + int(input_string[i+1])
            else:
                total_score += first_roll
            frame += 1
        else:
            first_roll = int(input_string[i])
            second_roll = int(input_string[i+1])
            total_score += first_roll + second_roll
            frame += 1
    return total_score