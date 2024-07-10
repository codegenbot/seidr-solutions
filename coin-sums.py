def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    names = ["quarters", "dimes", "nickles", "pennies"]

    result = []
    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        result.append(count)

    return tuple(result)


print(*coin_sums())