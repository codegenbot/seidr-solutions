def coin_sums():
    amount = int(input())
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickels, and pennies
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while amount >= coins[i]:
            amount -= coins[i]
            counts[i] += 1

    print(counts[3], counts[2], counts[1], counts[0])