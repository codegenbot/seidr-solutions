def calculate_score(bowls):
    score = 0
    rolls = []
    frame = 0

    for bowl in bowls:
        if bowl == 'X':
            rolls.append(10)
            rolls.append(0)
            frame += 1

        elif bowl.isdigit():
            rolls.append(int(bowl))

        elif bowl == '/':
            rolls.append(10 - rolls[-1])

        if frame >= 10:
            break

    for i in range(10):
        frame_score = sum(rolls[i*2:i*2+3])
        score += frame_score

    return score

bowls = input().replace(" ", "")
print(calculate_score(bowls))