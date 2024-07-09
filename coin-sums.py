def coin_sums():
    amount = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    output = [0, 0, 0, 0]

    for i in range(len(coins)):
        while amount >= coins[i]:
            output[i] += 1
            amount -= coins[i]

    return output


print(*coin_sums(), sep="\n")