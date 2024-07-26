def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    for i in range(len(denominations)):
        count = cents // denominations[i]
        if count > 0:
            coins[3 - len(denominations) + i] = count
        cents -= denominations[i] * count

    print(f"{coins[0]} quarters")
    print(f"{coins[1]} dimes")
    print(f"{coins[2]} nickles")
    print(f"{coins[3]} pennies")

coin_sum(1779)