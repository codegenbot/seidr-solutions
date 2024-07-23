```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i, coin in enumerate(reversed(coins)):
        while cents >= coin:
            count = cents // coin
            cents -= count * coin
            results[i] += count

    print(f"Quarters: {results[0]}")
    print(f"Dimes: {results[1]}")
    print(f"Nickels: {results[2]}")
    print(f"Pennies: {results[3]}")

coin_sums(4281)