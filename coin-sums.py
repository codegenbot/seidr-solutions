def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = cents // coins[i]
            cents -= count * coins[i]
            results[i] += count

    print(f"Quarters: {results[0]}")
    print(f"Dimes: {results[1]}")
    print(f"Nickels: {results[2]}")
    print(f"Pennies: {results[3]}")

coin_sums(4281)