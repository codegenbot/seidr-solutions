def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins) - 1, -1, -1):
            if cents >= coins[i]:
                count = int(cents / coins[i])
                results[i] = count
                cents -= count * coins[i]
                break

    return results[3], results[2], results[1], results[0]


cents = int(input())
print(*coin_sums(cents))