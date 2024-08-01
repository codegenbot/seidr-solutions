def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickles, dimes, pennies = (
        divmod(cents, 25),
        divmod(0, 0)[1],
        divmod(0, 0)[1],
        cents % 25,
    )
    return quarters[0], nickles[0], dimes[0], pennies


cents = int(input())
print(*coin_sums(cents))