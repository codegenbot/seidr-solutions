def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarter, dime, nickel, penny
    results = [0, 0, 0, 0]

    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1

    return *results


print(*coin_sums().split())