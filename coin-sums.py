```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        if coin <= cents:
            results.append(cents // coin)
            cents %= coin
        else:
            results.append(0)

    return results

cents = int(input("Enter the amount of cents: "))
result = coin_sums(cents)
print(f"Quarters: {result[0]}")
print(f"Dimes: {result[1]}")
print(f"Nickels: {result[2]}")
print(f"Pennies: {result[3]}")