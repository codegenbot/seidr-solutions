def calculate_score(bowls):
    score = 0
    frame = 1
    roll = 0
    rolls = [0] * 22

    for bowl in bowls:
        if bowl == 'X':
            rolls[roll] = 10
            rolls[roll + 1] = 0
            roll += 2
        elif bowl == '/':
            rolls[roll] = 10 - rolls[roll - 1]
            roll += 1
        elif bowl == '-':
            rolls[roll] = 0
            roll += 1
        else:
            rolls[roll] = int(bowl)
            roll += 1

    for i in range(1, 21):
        if frame < 10 and rolls[i - 1] == 10:
            score += rolls[i] + rolls[i + 1]
            if rolls[i] == 10:
                score += rolls[i + 2]
        elif rolls[i - 1] + rolls[i] == 10 and rolls[i - 1] != 0:
            score += rolls[i + 1]
        score += rolls[i]

        if rolls[i - 1] == 10 or i % 2 == 0:
            frame += 1

    return score