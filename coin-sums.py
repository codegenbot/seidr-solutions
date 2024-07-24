```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            if coin == 25 and cents < 25: 
                break
            cents -= coin
            result[coins.index(coin)] += 1

    return result


cents = int(input())
print(*coin_sums(cents))