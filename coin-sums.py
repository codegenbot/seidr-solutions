def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return (
        min([sum([coins[i] // c for c in coins[: i + 1]]) for i in range(len(coins))])
        if cents > 0
        else [0, 0, 0, 0]
    )


cents = int(input())
penny = dimes = nickels = quarters = 0

if cents <= 25:
    quarters = cents // 25
    cents %= 25
elif cents <= 225:
    quarters = 9
    dimes = (cents - 225) // 10
    cents %= 10
elif cents <= 125:
    dimes = 22
    nickels = (cents - 125) // 5
    cents %= 5
else:
    nickels = 24
    penny = cents

print(quarters)
print(nickels)
print(dimes)
print(penny)