```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_types = ['quarters', 'dimes', 'nickles', 'pennies']
    
    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            print(count)
            cents %= coins[i]

coin_sums(int(input()))