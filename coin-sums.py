```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = 1
            remainder = coins[i]
            while remainder >= coins[i-1] if i > 0 else True:
                remainder -= coins[i-1] if i > 0 else 0
                count += 1
            result[i] = count
            cents -= coins[i] * count
            break

    return result


cents = int(input())
print(*coin_sums(cents))