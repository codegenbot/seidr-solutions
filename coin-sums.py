```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [cents // coin for coin in coins]

input_value = int(input())
output = coin_sums(input_value)
print(*output)