def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            result.append(count)
            cents %= coin
    
    return count(len([coin for coin in result if coin != 0])), * [coin for coin in result if coin != 0]

cents = int(input())
num_coins, *counts = coin_sums(cents)
print(num_coins)
for count in counts:
    print(count)