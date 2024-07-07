```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        while cents >= coin:
            cents -= coin
            result[i] += 1

    return result

print(*coin_sums(int(input())))