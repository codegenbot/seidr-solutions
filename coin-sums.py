```
def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            remaining_cents = cents - denominations[i]
            coins[i] += 1
            if remaining_cents < denominations[i-1]:
                break
            cents = remaining_cents
    return coins

result = coin_sum(1779)
print(result)