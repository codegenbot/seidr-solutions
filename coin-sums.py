def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    while cents > 0:
        for i in range(len(denominations)):
            count = cents // denominations[i]
            if count > 0:
                coins[i] = count
                print(f"{count} {denominations[i] / 100:.2f} quarters")
                cents -= denominations[i] * count
                break

coin_sum(1779)