def coin_sums(cents):
    coins = [25, 10, 5, 1]
    num_coins = []

    for coin in coins:
        while cents >= coin:
            cents -= coin
            num_coins.append(coin)

        if cents == 0:
            break

    pennies = int(cents / 1)
    nickels = int((cents - pennies) / 5)
    dimes = int((cents - pennies - 5 * nickels) / 10)
    quarters = int((cents - pennies - 5 * nickels - 2 * 10 * dimes) / 25)

    return len(num_coins), pennies, nickels, dimes, quarters


c = int(input())
print(*coin_sums(c))