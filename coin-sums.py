def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            quarters = cents // 25
            cents %= 25
            result[3] += quarters
            if cents >= 10:
                dimes = cents // 10
                cents %= 10
                result[2] += dimes
                if cents >= 5:
                    nickels = cents // 5
                    cents %= 5
                    result[1] += nickels
                    while cents >= 1:
                        pennies = cents
                        cents = 0
                        result[0] += pennies

    return result[3], result[2], result[1], result[0]