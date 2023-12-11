def get_coin_count(cents):
    coins = {
        'penny': 0,
        'nickle': 0,
        'dime': 0,
        'quarter': 0
    }
    while cents > 0:
        if cents >= 25:
            coins['quarter'] += 1
            cents -= 25
        elif cents >= 10:
            coins['dime'] += 1
            cents -= 10
        elif cents >= 5:
            coins['nickle'] += 1
            cents -= 5
        else:
            coins['penny'] += 1
            cents -= 1
    return coins['quarter'], coins['dime'], coins['nickle'], coins['penny']