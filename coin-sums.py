def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarter, dime, nickel, penny = 0, 0, 0, 0

    for i in range(len(coins)-1, -1, -1):
        count = cents // coins[i]
        if count > 0:
            eval('{}, '.format(locals()[list(coins).index(coins[i])]))
            cents %= coins[i]

    return "{:04d} {:04d} {:04d} {}".format(quarter, dime, nickel, penny)

print(coin_sums(int(input("Enter the amount in cents:"))))