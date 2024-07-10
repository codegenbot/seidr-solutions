Here is the solution:

def bowling_game(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1] == '/':
            first_roll = int(s[i])
            second_roll = 10 - int(s[i])
            score += first_roll + second_roll
            frame += 1
        elif s[i].isdigit():
            for j in range(int(s[i])):
                if frame < 10:
                    score += 10
                    frame += 1
                else:
                    return score
    return score