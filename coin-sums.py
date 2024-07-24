def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [cents // 25, cents // 10, cents // 5, cents // 1]

    remaining_cents = cents % 25
    for i in range(len(coins)):
        while remaining_cents >= coins[i]:
            count[i] -= 1
            remaining_cents -= coins[i]

    return tuple(count)

cents = int(input())
print(*coin_sums(cents))