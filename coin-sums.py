```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    quarters = cents // 25
    cents %= 25

    dimes = cents // 10
    cents %= 10

    nickles = cents // 5
    cents %= 5

    pennies = cents

    result[0] = quarters
    result[1] = dimes
    result[2] = nickles
    result[3] = pennies

    return result

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))