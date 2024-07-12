def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[3] -= 1
            if result[3] < 0:
                break
            result[i] += 1

    return result


cents = int(input())
print(*coin_sums(cents))