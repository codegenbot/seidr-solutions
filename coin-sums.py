def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            results[i] = count
            cents %= coins[i]

    return f"{results[0]} quarters{(not results[0])}, {results[1]} nickels{(not results[1])}, {results[2]} dimes{(not results[2])}, {results[3]} pennies{(not results[3])}"