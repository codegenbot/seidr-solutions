for i in range(len(denominations)-1, -1, -1):
    while cents >= denominations[i]:
        cents -= denominations[i]
        coins[i] += 1
return coins