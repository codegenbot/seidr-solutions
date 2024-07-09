def coin_sums():
    amount = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    output = [0, 0, 0, 0]

    for coin in reversed(coins):
        while amount >= coin:
            amount -= coin
            output[coins.index(coin)] += 1

    return output


print(*coin_sums(), sep="\n")