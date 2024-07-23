```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = []
    for coin in coins:
        count = cents // coin
        cents %= coin
        counts.append((count, cents))
    return counts

c = int(input())
quarters, cents = c, c - c % 25 if c >= 25 else 0
nickles, cents = cents // 10, cents % 10
dimes, cents = cents // 5, cents % 5
pennies = cents

print(quarters, nickles, dimes, pennies)