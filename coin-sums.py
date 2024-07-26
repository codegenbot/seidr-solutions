```
def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count
    return coins

cents = int(input("Enter the number of cents: "))
result = coin_sum(cents)
print(f"Quarters: {result[0]}")
print(f"Nickles: {result[1]}")
print(f"Dimes: {result[2]}")
print(f"Pennies: {result[3]}")