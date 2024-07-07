```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = 0
        while cents >= coin:
            cents -= coin
            count += 1
        result[i] = count

    return result


cents = int(input())
print(*coin_sums(cents))