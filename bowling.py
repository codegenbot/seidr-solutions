def get_strike_bonus(bowls, index):
    if bowls[index] == 'X' and index + 2 < len(bowls):
        return 10 + get_score(bowls[index + 1]) + get_score(bowls[index + 2])
    elif bowls[index] == '/' and index + 1 < len(bowls):
        return 10 - get_score(bowls[index - 1]) + get_score(bowls[index + 1])
    else:
        return 0

def get_score(bowl):
    if bowl == 'X':
        return 10
    elif bowl == '/':
        return 10
    elif bowl == '-':
        return 0
    else:
        return int(bowl)