```
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    result = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        while cents >= coin:
            cents -= coin
            result[i] += 1

    return result


cents = int(input())
print(*coin_sums(cents))