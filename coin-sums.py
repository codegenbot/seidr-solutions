```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = {'quarters': 0, 'dimes': 0, 'nickels': 0, 'pennies': 0}

    for coin in sorted(coins, reverse=True): 
        while cents >= coin:
            coins_per_type = cents // coin
            cents %= coin
            if coin == 25:
                coin_counts['quarters'] += coins_per_type
            elif coin == 10:
                coin_counts['dimes'] += coins_per_type
            elif coin == 5:
                coin_counts['nickels'] += coins_per_type
            else:
                coin_counts['pennies'] += coins_per_type

    return {key: value for key, value in sorted(coin_counts.items())}

cents = int(input())
print(*list(coin_sums(cents).values()))