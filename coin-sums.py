def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(4):
        if cents >= coins[i]:
            count = int(cents / coins[i])
            cents %= coins[i]
            results[i] = count
        else:
            break

    return results


cents = int(input())
print(*coin_sums(cents))