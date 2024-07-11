```Python
def coin_sum():
    cents = int(input("Enter the amount in cents: "))
    coins = [0, 0, 0, 0]
    
    while cents > 0:
        if cents >= 25:
            quarters = cents // 25
            coins[0] += quarters
            cents -= quarters * 25
        if cents >= 10:
            dimes = cents // 10
            coins[1] += dimes
            cents -= dimes * 10
        if cents >= 5:
            nickels = cents // 5
            coins[2] += nickels
            cents -= nickels * 5
        else:
            pennies = cents
            coins[3] += pennies
            cents = 0
    
    print(f"Quarters: {coins[0]}, Dimes: {coins[1]}, Nickels: {coins[2]}, Pennies: {coins[3]}")

coin_sum()