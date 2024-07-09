def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        count = cents // coins[i]
        if count > 0:
            result[3-i] += count
            cents %= coins[i]

    return "{} quarters, {} dimes, {} nickels, {} pennies".format(*result)

print(coin_sums(int(input("Enter the amount in cents:"))))