n = int(input())
coins = [0, 0, 0, 0]
coins[3] = n // 25
n = n % 25
coins[2] = n // 10
n = n % 10
coins[1] = n // 5
coins[0] = n % 5

for coin in coins:
    print(coin)