```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    names = ['quarters', 'dimes', 'nickles', 'pennies']

    for i in range(len(coins)):
        count = 0
        while cents >= coins[i]:
            cents -= coins[i]
            count += 1
        if count > 0:
            print(f"{count} {names[i]}s" if count > 1 else f"{count} {names[i]}")