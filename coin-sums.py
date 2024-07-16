def coin_sums(cents):
    coins = [1, 5, 10, 25]
    results = [0, 0, 0, 0]

    for i in range(len(coins)-1,-1,-1):
        while cents >= coins[i]:
            results[i] += 1
            cents -= coins[i]

    return results

print('\n'.join(map(str, coin_sums(int(input())))))