```
def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            coins[i] += denominations[i] // denominations[i-1]
            cents -= denominations[i] // denominations[i-1] * denominations[i-1]
    return coins

result = coin_sum(1779)
print(result)