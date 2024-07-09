def coin_sums():
    amount = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    output = [0, 0, 0, 0]

    for i in range(len(coins)-1,-1,-1):
        while amount >= coins[i]:
            count = int(amount / coins[i])
            amount -= count * coins[i]
            output[i] = count

    return output


print(*coin_sums(), sep="\n")