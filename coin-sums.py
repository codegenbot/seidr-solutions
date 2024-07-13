Here is the modified code:

def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = int(cents // coins[i])
            cents -= count * coins[i]
            results[i] = count

    return tuple(results)

cents = int(input())
print(*coin_sums(cents))