def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0] * 4
    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1
    return result


cents = int(input())
print(*coin_sums(cents))