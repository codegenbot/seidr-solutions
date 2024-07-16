```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    output = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            output.append(str(count))
        cents %= coin
    return '\n'.join(output)