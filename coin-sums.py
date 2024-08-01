```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_per_coin = [4, 2, 1, 1]
    result = [0, 0, 0, 0]

    for i in range(3, -1, -1):
        while cents >= coins[i]:
            count = int(cents // coins[i])
            cents %= coins[i]
            result[i] += count

    return result[0], result[1], result[2], result[3]

cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(quarters, nickles, dimes, pennies)