```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for i in range(len(coins)-1,-1,-1):
        count = min(cents // coins[i], res[i])
        res[i] = count
        cents -= count * coins[i]
    
    return ' '.join(map(str, res)) + '\n'

print(coin_sums(int(input())))