def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0] * 4

    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1
    return results[3], results[2], results[1], results[0]


cents = int(input())
penny, nickel, dime, quarter = coin_sums(cents)
print(quarter)
print(dime)
print(nickel)
print(penny)