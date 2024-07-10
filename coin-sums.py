```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    
    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append(count)
            cents %= coin
    
    return results[0], results[1], results[2], results[3]

cents = int(input())
penny, nickel, dime, quarter = coin_sums(cents)
print(penny)
print(nickel)
print(dime)
print(quarter)