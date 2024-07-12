```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for i in range(len(coins)):
        count = cents // coins[i]
        remaining_cents = cents % coins[i]
        result.append(count)
        cents = remaining_cents
    return tuple(result)

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)

print(quarters)
print(nickles)
print(dimes)
print(pennies)