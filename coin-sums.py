def coin_sums():
    n = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while n >= coins[i]:
            count = int(n // coins[i])
            n -= count * coins[i]
            result[i] += count

    return " ".join(map(str, result))