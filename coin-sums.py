def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return f"{result[3]}\n{result[2]}\n{result[1]}\n{result[0]}"

print(coin_sums())