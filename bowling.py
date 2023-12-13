def bowling(score):
    total_score = 0
    frame = 0
    roll = 0

    for char in score:
        if char.isdigit():
            total_score += int(char)
            roll += 1
            if roll == 2 or total_score == 10:
                roll = 0
                frame += 1
        elif char == 'X':
            total_score += 10
            roll = 0
            frame += 1
        elif char == '/':
            total_score += 10 - int(score[roll-1])
            roll = 0
            frame += 1
        elif char == '-':
            roll += 1
            if roll == 2:
                roll = 0
                frame += 1

        if frame == 10:  # Reached the end of the game
            break

    return total_score