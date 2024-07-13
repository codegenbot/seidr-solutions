def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [cents // coin for coin in coins] + [cents % coin for coin in coins[::-1]]
    return result

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))