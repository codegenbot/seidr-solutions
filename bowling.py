Here is the solution:

def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10 + (10 - int(rolls[roll_index+1].split('/')[0])) * 2
            roll_index += 2
        elif rolls[roll_index].split('/')[0] == '10':
            score += 10 + int(rolls[roll_index+1].split('/')[0])
            roll_index += 2
        else:
            strike = False
            while not strike:
                if rolls[roll_index].split('/')[0] != 'X' and int(rolls[roll_index].split('/')[0]) < 10:
                    score += int(rolls[roll_index].split('/')[0])
                    roll_index += 1
                elif rolls[roll_index].split('/')[0] == '10':
                    score += 10
                    break
                else:
                    score += 10
                    strike = True
                    break
    return score