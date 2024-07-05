```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(4):
        while cents >= coins[i]:
            counts = cents // coins[i]
            cents -= counts * coins[i]
            results[i] += counts

    return "\n".join(map(str, results))