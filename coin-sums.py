```
coins = [25, 10, 5, 1]
amount = int(input("Enter the amount in cents: "))
coin_counts = [0] * len(coins)

for i, coin in enumerate(coins):
    coin_counts[i] = amount // coin
    amount %= coin

print(f"Quarters: {coin_counts[0]}")
print(f"Nickels: {coin_counts[1]}")
print(f"Dimes: {coin_counts[2]}")
print(f"Pennies: {amount}")