import re

def calculate_score(rounds):
    score = 0
    bonus = 0
    frame = 0

    # Remove all non-numeric characters from the rounds string
    rounds = re.sub(r'[^0-9X-]', '', rounds)

    for i in range(len(rounds)):
        if frame == 10:
            break
        elif rounds[i] == 'X':
            score += 10 + bonus
            bonus += 10
            frame += 1
        elif rounds[i] == '/':
            score += 10 - int(rounds[i-1]) + bonus
            bonus += int(rounds[i+1])
            frame += 1
        elif rounds[i] == '-':
            frame += 1
        else:
            score += int(rounds[i])

    return score