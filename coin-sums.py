def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    count = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            count[i] += 1

    print(count[3], end=" ")  # print number of pennies
    if count[2] > 0:
        print(count[2], end=" ")  # print number of nickles
    if count[1] > 0:
        print(count[1], end=" ")  # print number of dimes
    if count[0] > 0:
        print(count[0])  # print number of quarters


coin_sums()