def coin_sums(cents):
    coins = [25, 10, 5, 1]  # Quarters, Dimes, Nickels, Pennies
    count = [0, 0, 0, 0]
    for coin in coins:
        while cents >= coin:
            cents -= coin
            count[coins.index(coin)] += 1
    return count


cents = int(input())
print(*coin_sums(cents))