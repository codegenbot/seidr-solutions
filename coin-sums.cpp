```
def get_coin_sums(coins, total):
    # Initialize a dictionary to store the counts for each coin type
    counts = {1: 0, 5: 0, 10: 0, 25: 0}

    # Loop through the coins and increment the count for each coin type
    for coin in coins:
        if coin <= total:
            counts[coin] += 1

    return [counts[1], counts[5], counts[10], counts[25]]
```
The code above should solve the problem. It initializes a dictionary to store the counts for each coin type, and then loops through the coins and increments the count for each coin type. Finally, it returns a list containing the counts for each coin type in the correct order.