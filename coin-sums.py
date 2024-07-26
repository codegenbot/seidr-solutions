def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    denominations.reverse()

    for i in range(len(denominations)):
        count = cents // denominations[i]
        if count > 0:
            print(f"{denominations[i] / 100} quarters")
            print(f"{count % (cents // denominations[i + 1])} dimes")
            print(f"{(count % (cents // denominations[i + 1])) * 2} nickels")
            print(
                f"and {((count % (cents // denominations[i + 1])) * 20) % 100} pennies"
            )

        coins[i] = count
        cents -= denominations[i] * count


coin_sum(1779)