```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]
    
    for coin in coins:
        while cents >= coin:
            cents -= coin
            results[coins.index(coin)] += 1
    
    return results[0], results[1], results[2], results[3]

cents = int(input())
penny, nickel, dime, quarter = coin_sums(cents)
print(penny)
print(nickel)
print(dime)
print(quarter)