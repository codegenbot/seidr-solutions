def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    while cents > 0:
        for i in range(len(denominations)-1, -1, -1):  
            count = min(cents // denominations[i], coins[i] + 1)
            if count > 0:
                coins[i] = count
                cents -= denominations[i] * count
                break

    return ' '.join(map(str, coins))

print(coin_sum(1779))