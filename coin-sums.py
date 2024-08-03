def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickels, dimes, pennies = divmod(cents, coins)
    return list(map(int, (quarters, nickels, dimes, pennies)))


cents = int(input())
print(*coin_sums(cents))