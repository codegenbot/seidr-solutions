def coin_sums(cents):
    coins = [25, 10, 5]
    results = [cents // c if cents >= c else 0 for c in coins] + [cents % 100]
    return '\n'.join(map(str, results))