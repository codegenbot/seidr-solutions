def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[0] += cents // 25
            cents %= 25
            if coins[i] == 5:
                result[2] += cents // 5
                cents %= 5
            elif coins[i] == 1:
                result[3] += cents
        return [result[0], result[1], result[2], result[3]]