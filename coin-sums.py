def coin_sums():
    n = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while n >= coins[i]:
            n -= coins[i]
            results[i] += 1

    return " ".join(map(str, results))


print(coin_sums())