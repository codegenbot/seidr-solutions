def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = [0] * 4

    for i in range(3, -1, -1):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1
    return (
        str(result[0])
        + "\n"
        + str(result[1])
        + "\n"
        + str(result[2])
        + "\n"
        + str(result[3])
    )


print(coin_sums())