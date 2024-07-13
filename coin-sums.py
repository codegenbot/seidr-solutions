def coin_sums(cents):
    coins = [25, 10, 5, 1]
    names = ['quarters', 'dimes', 'nickles', 'pennies']
    result = []

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            result.append((count, names[i]))
            cents %= coins[i]

    for item in ['{} {}'.format(count, name if count == 1 else f"{count} {name}s") for count, name in result]:
        print(item)