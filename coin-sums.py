```
def coin_sum(cents):
    coins = [25, 10, 5, 1]
    names = ['quarters', 'dimes', 'nickles', 'pennies']
    result = []

    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        if count > 0:
            result.append(f"{count} {names[i]}")
    
    print(' '.join(result))

coin_sum(1779)