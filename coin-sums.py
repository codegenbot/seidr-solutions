def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    count = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            count[i] += 1

    return " ".join(map(str, count))


print(coin_sums())