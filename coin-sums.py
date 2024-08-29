Here is the solution:

def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    out = []
    for coin in coins:
        out.append(int(cents // coin))
        cents %= coin
    return out