```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    answer = [0, 0, 0, 0]  

    for coin in coins:
        count = cents // coin
        cents %= coin
        answer[coins.index(coin)] = count

    return len(answer) - 1, *answer[:-1]

cents = int(input())
print(*coin_sums(cents))