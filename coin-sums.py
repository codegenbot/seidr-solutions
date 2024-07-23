```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = []
    
    for coin in coins:
        count = cents // coin
        counts.append(count)
        cents %= coin
        
    return counts


c = int(input())
print(*coin_sums(c))