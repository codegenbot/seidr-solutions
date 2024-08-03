def coin_sums():
    n = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    result = []

    for coin in reversed(coins):
        count = n // coin
        n %= coin
        result.append(count)

    return " ".join(map(str, result))


print(coin_sums())