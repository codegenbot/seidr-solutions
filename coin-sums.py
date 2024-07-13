def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarter, dime, nickel, penny = 0, 0, 0, 0
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            if coin == 25:
                quarter = count
            elif coin == 10:
                dime = count
            elif coin == 5:
                nickel = count
            else:
                penny = count
            cents %= coin

    return {
        "quarters": quarter,
        "dimes": dime,
        "nickels": nickel,
        "pennies": penny
    }

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))