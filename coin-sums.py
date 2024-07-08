```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins) - 1, -1, -1):
            num_coins = int(cents / coins[i])
            if num_coins > 0:
                cents -= num_coins * coins[i]
                result[i] += num_coins
                break

    return result

cents = int(input())
print(*coin_sums(cents), sep='\n')