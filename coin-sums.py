def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for i in range(0, cents + 1):
        ways = [i]
        for j in range(len(coins) - 1, -1, -1):
            if i >= coins[j]:
                new_ways = ways + [ways[-1] - coins[j]]
                ways = new_ways
            else:
                break
        results.append(ways)
    pennies, nickels, dimes, quarters = 0, 0, 0, 0

    for i in range(len(results) - 1, -1, -1):
        while results[i]:
            if results[i][-1] >= 25:
                quarters += results[i].pop()
            elif results[i][-1] >= 10:
                dimes += results[i].pop()
            elif results[i][-1] >= 5:
                nickels += results[i].pop()
            else:
                pennies += results[i].pop()

    return pennies, nickels, dimes, quarters