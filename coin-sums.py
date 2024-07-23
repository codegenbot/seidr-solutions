def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            if coin == 25: 
                quarters = count
                dimes = 0
                nickels = 0
                pennies = 0
            elif coin == 10:
                quarters = 0
                dimes = count
                nickels = 0
                pennies = 0
            elif coin == 5:
                quarters = 0
                dimes = 0
                nickels = count
                pennies = 0
            else: 
                quarters = 0
                dimes = 0
                nickels = 0
                pennies = count
            results.extend([quarters, dimes, nickels, pennies])
            cents %= coin

    return " ".join(map(str, results)) + "\n"