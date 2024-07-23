def bowling_score(frames):
    score = 0
    current_roll = 0
    frame = 1

    for char in frames:
        if char.isdigit():
            current_roll = int(char)
        elif char == '/':
            if current_roll + 10 > 10:
                score += 10 - ((-score)//10)*10
            else:
                score += 10
            current_roll = 0
            frame += 1
        else:
            raise ValueError("Invalid input")

    while current_roll > 0 and frame <= 10:
        if current_roll + 10 > 10:
            score += 10 - ((-score)//10)*10
        else:
            score += current_roll
        current_roll = 0
        frame += 1

    return score