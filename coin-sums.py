```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [[], [], [], []]

    for i in range(len(coins)):
        count = int(cents / coins[i])
        cents %= coins[i]
        for _ in range(count):
            results[i].append(coins[i])

    return (
        f"{len(results[0])} quarter{'s' if len(results[0]) > 1 else ''}",
        f"{len(results[1])} dime{'s' if len(results[1]) > 1 else ''}",
        f"{len(results[2])} nickel{'s' if len(results[2]) > 1 else ''}",
        f"{cents} penny{'s' if cents > 1 else ''}"
    )