```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]
    
    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            total_coins[i] += 1
            cents -= coins[i]
    
    print(f"Pennies: {total_coins[3]}")
    print(f"Nickles: {total_coins[2]}")
    print(f"Dimes: {total_coins[1]}")
    print(f"Quarters: {total_coins[0]}")

coin_sums(100)