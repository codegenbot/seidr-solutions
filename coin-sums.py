```
def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    result = []

    for coin in coins:
        count = cents // coin
        result.append(count)
        cents %= coin

    return ' '.join(map(str, result))