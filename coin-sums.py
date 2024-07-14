def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins) - 1, -1, -1):
            if cents >= coins[i]:
                count = int(cents / coins[i])
                cents -= count * coins[i]
                coin_counts[i] = count
            if cents == 0:
                break

    return coin_counts[3], coin_counts[2], coin_counts[1], coin_counts[0]


cents = int(input())
print(*coin_sums(cents))