def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    num_coins = []

    for c in coins:
        num_coins.append(cents // c)
        cents %= c

    return str(num_coins[0]) + "\n" + " ".join(map(str, num_coins[1:]))