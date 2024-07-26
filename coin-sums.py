```
def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    denominations.reverse()

    for i in range(len(denominations)):
        count = cents // denominations[i]
        if count > 0:
            coins[0] += count
            cents -= count * denominations[i]
            if cents > 0:
                print(f"{coins[0]} quarters")
            else:
                print("0 quarters")
            print()
        for i in range(1, len(coins)):
            coins[i] = (cents // denominations[i])
            cents %= denominations[i]
            if cents > 0:
                print(f"{coins[i]} dimes")
            else:
                print("0 dimes")
            if cents > 0:
                print(f"{coins[i] * 2} nickels")
                cents %= 5
                if cents > 0:
                    print(f"and {cents} pennies")
                else:
                    print(" and 0 pennies")
            break

coin_sum(1779)