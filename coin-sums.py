def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [cents // 25, (cents % 25) // 10, (cents % 10) // 5, cents % 5]

    return results

cents = int(input())
print(*coin_sums(cents))