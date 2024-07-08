```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(3,-1,-1): 
        count = cents // coins[i] 
        cents %= coins[i] 
        result[i] = count 

    return result

cents = int(input())
print(*coin_sums(cents), sep='\n')