def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            coins[i] += cents // denominations[i]
            cents = cents % denominations[i]
    return coins

cents = int(input("Enter the number of cents: "))
result = coin_sum(cents)
print(result)