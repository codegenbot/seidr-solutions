```Python
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        quotient = int(cents / coins[i])
        cents %= coins[i]
        result[i] = quotient

    return "Quarters: {}, Nickels: {}, Dimes: {}, Pennies: {}".format(result[0], result[1], result[2], result[3])

print(coin_sums(int(input("Enter the amount in cents: "))))