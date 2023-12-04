
>>> def get_coin_counts(cents):
...     coins = [1, 5, 10, 25]
...     counts = [0, 0, 0, 0]
...     while cents > 0:
...         for i in range(len(coins)):
...             if cents >= coins[i]:
...                 cents -= coins[i]
...                 counts[i] += 1
...     return (counts)
... 
>>> get_coin_counts(37)
[0, 1, 1, 2]