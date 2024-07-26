def coin_sum(cents):
    denominations = [1, 5, 10, 25]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count
    return coins

cents = int(input("Enter the number of cents: "))
result = coin_sum(cents)
print(result)