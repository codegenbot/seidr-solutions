def coin_sums(cents):
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickles, and pennies
    count = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            count[i] += 1

    return count


cents = int(input())
print(*coin_sums(cents))