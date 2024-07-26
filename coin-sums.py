def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [1, 5, 10, 25]

    for i in range(len(denominations)):
        count = cents // denominations[i]
        if count > 0:
            coins[i] = count
        cents -= denominations[i] * count

    print(f"{coins[3]} quarters")
    print(f"{coins[2]} dimes")
    print(f"{coins[1]} nickles")
    print(f"{coins[0]} pennies")

coin_sum(1779)