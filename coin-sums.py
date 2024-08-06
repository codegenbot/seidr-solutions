def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1

    return (
        str(results[3])
        + "\n"
        + str(results[2])
        + "\n"
        + str(results[1])
        + "\n"
        + str(results[0])
    )