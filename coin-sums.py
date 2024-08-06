def coin_sums(cents):
    coins = [25, 10, 5, 1]
    ans = []
    for coin in coins[::-1]:
        while cents >= coin:
            cents -= coin
            ans.append(coin // 100)
    return [str(ans[i]) if i < len(ans) else "0" for i in range(len(coins))]


cents = int(input())
print(*coin_sums(cents))