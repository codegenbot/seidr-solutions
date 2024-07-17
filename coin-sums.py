```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]
    
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    
    return counts[3], counts[2], counts[1], counts[0]

cents = int(input())
penny, nickel, dime, quarter = coin_sums(cents)
print(quarter)
print(dime)
print(nickel)
print(penny)