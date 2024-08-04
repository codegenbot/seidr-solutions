def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    output = []

    for coin in coins:
        output.append(cents // coin)
        cents %= coin

    return (
        str(output[0])
        + "\n"
        + "0\n" * (3 - len(output))
        + str(output[1])
        + "\n"
        + "0\n" * (2 - len(output))
        + str(output[2])
        + "\n"
        + "0\n" * (1 - len(output))
        + str(output[3])
    )


print(coin_sums())