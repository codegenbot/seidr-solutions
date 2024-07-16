```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickles, dimes, pennies = 0, 0, 0, 0

    for i in range(len(coins)):
        count = cents // coins[i] 
        cents %= coins[i]         
        if i == 0:
            quarters = count
        elif i == 1:
            nickles = count
        elif i == 2:
            dimes = count
        else:
            pennies = count

    return quarters, nickels, dimes, pennies