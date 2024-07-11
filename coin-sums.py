def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = cents // coins[i]  
            cents %= coins[i]           
            coin_counts[i] += count

    return coin_counts[0], coin_counts[1], coin_counts[2], coin_counts[3]


cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)