def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return list(map(lambda x: cents // x, coins))


# Test cases
for c in [1, 2, 3, 4, 5]:
    print(*coin_sums(c))