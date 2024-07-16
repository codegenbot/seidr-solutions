def coin_sums(cents):
    coins = [25, 10, 5, 1]
    num_coins = 0
    result = []
    
    for coin in coins:
        count = cents // coin
        if count > 0:
            num_coins += count
            cents %= coin
            result.append(count)
    
    return num_coins, *result

cents = int(input())
num_coins, *counts = coin_sums(cents)
print(num_coins)
for count in counts:
    print(count)