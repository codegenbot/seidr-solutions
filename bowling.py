def calculate_bowling_score(input_string):
    score = 0
    frame = 1
    frame_score = 0
    strike = False
    bonus_rolls = []

    for char in input_string:
        if char == 'X':
            score += 10
            if frame < 10:
                strike = True
                frame += 1
            else:
                strike = False
        elif char == '/':
            score += 10 - frame_score
            if frame < 10:
                frame += 1
        elif char == '-':
            frame_score += 0
        else:
            frame_score += int(char)

        if frame_score == 10 and not strike:
            frame_score = 0
            if frame < 10:
                frame += 1

        while bonus_rolls and bonus_rolls_count > 0:
            score += bonus_rolls.pop(0)
            bonus_rolls_count -= 1

        if char == 'X' and frame < 10:
            bonus_rolls.extend([10, 10])
        elif char == '/':
            bonus_rolls.append(10 - int(input_string[-1]) if input_string[-1] != 'X' else 10)

    return score

input_string = input()
print(calculate_bowling_score(input_string))