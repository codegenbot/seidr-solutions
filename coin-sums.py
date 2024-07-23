def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            count = cents // coin
            cents -= count * coin
            results[coins.index(coin)] += count

    def print_results(results):
        for i, count in enumerate(reversed(results)):
            if i == 0:  
                print(f"Quarters: {count}")
            elif i == 1:  
                print(f"Dimes: {count}")
            elif i == 2:  
                print(f"Nickels: {count}")
            else:
                print(f"Pennies: {count}")

    print_results(results)