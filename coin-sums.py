def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coins_name = ["quarters", "dimes", "nickles", "pennies"]

    output = []
    for i in range(len(coins)):
        output.append(cents // coins[i])
        cents %= coins[i]

    return tuple(output)


cents = int(input())
print(*coin_sums(cents))