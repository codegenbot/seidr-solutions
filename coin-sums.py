def coin_sums(cents):
    coins = []
    quarters = cents // 25
    cents %= 25
    coins.extend([quarters] * 4)
    
    dimes = cents // 10
    cents %= 10
    coins.extend([dimes] * 10)
    
    nickles = cents // 5
    cents %= 5
    coins.extend([nickles] * 5)
    
    pennies = cents
    coins.append(pennies)
    
    return len(coins), *coins