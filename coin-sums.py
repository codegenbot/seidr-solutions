for i in range(len(coins) - 1):
    count = cents // coins[i]
    if count > 0:
        res[i] = count
        cents -= count * coins[i]

res[-1] = cents
return " ".join(map(str, res)) + "\n"