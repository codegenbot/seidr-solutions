```
def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    for denom in denominations:
        count = cents // denom
        coins[denominations.index(denom)] = count
        cents %= denom
    return coins

result = coin_sum(1779)
print(result)