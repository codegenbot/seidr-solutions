Here is the completed code:

def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []
    for coin in coins:
        count = cents // coin
        remaining = cents % coin
        if remaining > 0:
            results.append(count)
            break
        results.append(count)
    return results