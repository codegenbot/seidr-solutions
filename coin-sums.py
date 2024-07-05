```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            res[i] = count
            cents -= count * coins[i]
    
    return ' '.join(map(str, res)) + " {}\n"

print(coin_sums(int(input())))