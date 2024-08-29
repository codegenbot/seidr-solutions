```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    output = []
    
    for coin in reversed(coins):
        while cents >= coin:
            cents -= coin
            output.append(coin // 100)
    
    return output + [0] * (4 - len(output))