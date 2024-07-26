```
def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        count = cents // denominations[i]
        cents %= denominations[i]
        coins[3-i] += count
    return coins

cents = int(input("Enter the number of cents: "))
result = coin_sum(cents)
print(result)