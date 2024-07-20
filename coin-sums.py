def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return ['quarter: ' + str(cents // 25) if cents >= 25 else '0', 
            'dime: ' + str(cents // 10) if cents >= 10 else '0', 
            'nickle: ' + str(cents // 5) if cents >= 5 else '0', 
            'penny: ' + str(cents)]