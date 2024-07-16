def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = int(cents / coins[i])
            cents -= count * coins[i]
            result[i] += count

    return result


cents = int(input())
print(*coin_sums(cents))