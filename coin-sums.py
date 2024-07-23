def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(3,-1,-1): 
        while cents >= coins[i]:
            count = cents // coins[i]
            results[i] = count
            cents -= count * coins[i]

    return tuple(results)

cents = int(input())
print(*coin_sums(cents))