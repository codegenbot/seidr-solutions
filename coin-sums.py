def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    coins_needed = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            coins_needed[i] += 1

    return coins_needed


cents = int(input())
print(*coin_sums(cents))