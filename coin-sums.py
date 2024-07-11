def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = ' '.join(map(str, [coins[i]//value + (cents>=value)*1 for i, value in enumerate(coins)]))
    return result


cents = int(input())
print(coin_sums(cents))