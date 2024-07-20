```
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        while count > 0 and cents >= coins[i]:
            result[i] += 1
            cents -= coins[i]
            count -= 1

    return result


cents = int(input())
print(*coin_sums(cents))