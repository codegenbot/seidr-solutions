def coin_sums(cents):
    coins = [25, 10, 5, 1]  
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    max_quarter = min(cents // 25, len(result))
    remaining_cents = cents % 25
    result[0] = max_quarter

    max_dime = min(remaining_cents // 10, len(result) - 2)
    remaining_cents %= 10
    result[1] = max_dime

    max_nickel = min(remaining_cents // 5, len(result) - 3)
    remaining_cents %= 5
    result[2] = max_nickel

    max_penny = remaining_cents
    result[3] = max_penny

    return " ".join(map(str, result))