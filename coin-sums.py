def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            count = cents // coin
            cents -= count * coin
            results[coins.index(coin)] += count

    for i, count in enumerate(reversed(results)):
        if i == 3:  
            print(f"Pennies: {count}")
        elif i == 2:  
            print(f"Nickels: {count}")
        elif i == 1:  
            print(f"Dimes: {count}")
        else:
            print(f"Quarters: {count}")

coin_sums(4281)