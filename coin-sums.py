```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = min(int(cents / coins[i]), len([True for _ in range(result[i])]))
            result[i] += count
            cents -= coins[i] * count

    return result


cents = int(input())
print(*coin_sums(cents))