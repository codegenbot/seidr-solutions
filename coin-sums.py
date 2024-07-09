```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        result[i] = count
        cents %= coins[i]

    return tuple(result)

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)