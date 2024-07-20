def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_names = ["quarters", "dimes", "nickles", "pennies"]
    result = []

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            result.append(count)
            cents %= coins[i]
        else:
            result.append(0)

    return tuple(result)


c = int(input())
print(*coin_sums(c))