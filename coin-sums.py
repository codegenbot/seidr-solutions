def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            count = min((cents + coins[i] - 1) // coins[i], len(coins) - i)
            for _ in range(count):
                result[3-coins.index(coins[i])] += 1
                cents -= coins[i]

    return result

cents = int(input())
print(*coin_sums(cents))