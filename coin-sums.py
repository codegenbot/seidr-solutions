```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            result.append(count)
            cents %= coin
    for i, num in enumerate(result):
        if i == 0:
            print(f"quarters: {num}")
        elif i == 1:
            print(f"dimes: {num}")
        elif i == 2:
            print(f"nickels: {num}")
        else:
            print(f"pennies: {num}")

cents = int(input("Enter the number of cents: "))
coin_sums(cents)