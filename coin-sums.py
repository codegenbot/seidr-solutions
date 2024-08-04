Here is the solution:

def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents
    nickels = 0
    dimes = 0
    quarters = 0
    
    for i in range(len(coins)):
        count = int(pennies / coins[i])
        if count > 0:
            if i == 3:
                quarters = count
            elif i == 2:
                dimes = count
            elif i == 1:
                nickels = count
            pennies %= coins[i]
    
    return quarters, nickels, dimes