def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

        if cents == 0:
            break

    return sorted(enumerate(result), key=lambda x: x[1], reverse=True)

cents = int(input())
print(*map(lambda x: str(x) if x > 0 else '', *zip(*coin_sums(cents))))