```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return result[0], result[1], result[2], result[3]

cents = int(input())
penny, nickel, dime, quarter = coin_sums(cents)
print(quarter)
print(nickel)
print(dime)
print(penny)