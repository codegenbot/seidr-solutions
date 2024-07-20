def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return min(
        [
            coins.count(x)
            for x in range(0, cents + 1, x)
            if sum([x // coin for coin in coins]) == cents
        ]
    )


input_cents = int(input())
print(*coin_sums(input_cents))