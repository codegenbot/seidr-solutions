```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in coins:
        count = cents // coin
        if count > 0:
            results[coins.index(coin)] += count
            cents -= count * coin

    for i, count in enumerate(reversed(results)):
        if i == 3:  
            print(f"Pennies: {count}")
        elif i == 2:  
            print(f"Nickels: {count*5}")
        elif i == 1:  
            print(f"Dimes: {count*10}")
        else:
            print(f"Quarters: {count}")

coin_sums(4281)