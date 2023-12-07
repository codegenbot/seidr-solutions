def coin_sums(cents):
coins = (1, 5, 10, 25)
counts = {}
for i in range(len(coins)):
if cents >= coins[i]:
counts[coins[i]] = cents // coins[i]
cents %= coins[i]
return counts