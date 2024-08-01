```
def coin_sums():
    amount = int(input())
    coins = [25, 10, 5, 1]
    result = []
    
    for coin in coins:
        count = amount // coin
        amount %= coin
        result.append(count)
        
    return *result,