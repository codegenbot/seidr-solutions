def calc_score(round_bowls):
    score = 0
    frames = [0] * 10
    i = 0
    for frame in range(10):
        if round_bowls[i] == 'X':
            score += 10 + get_bonus(round_bowls[i+1:])[:2]
            i += 1
        elif round_bowls[i+1] == '/':
            score += 10 + get_bonus(round_bowls[i+2])
            i += 2
        else:
            score += int(round_bowls[i]) + int(round_bowls[i+1])
            if score == 10:
                score += get_bonus(round_bowls[i+2])
            i += 2
    return score
    
def get_bonus(bowls):
    result = []
    for bowl in bowls:
        if bowl == 'X':
            result.extend([10, 10])
        elif bowl == '/':
            result.append(10 - result[-1])
        else:
            result.append(int(bowl))
    return result

round_bowls = input()
print(calc_score(round_bowls))