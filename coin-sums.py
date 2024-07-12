```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            coin_counts[i] += 1
            cents -= coins[i]

    return coin_counts

cents = int(input())
coin_counts = coin_sums(cents)

print(coin_counts[0])
print(coin_counts[1])
print(coin_counts[2])
print(coin_counts[3])