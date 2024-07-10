```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            total_coins[i] += 1
            cents -= coins[i]

    return f"Quarters: {total_coins[3]}, Nickles: {total_coins[2]}, Dimes: {total_coins[1]}, Pennies: {total_coins[0]}"