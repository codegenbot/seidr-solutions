def coin_sums(cents):
    quarters = cents // 25
    cents -= quarters * 25
    dimes = cents // 10
    cents -= dimes * 10
    nickels = cents // 5
    cents -= nickels * 5
    pennies = cents

    return quarters, dimes, nickels, pennies

cents = int(input())
result = coin_sums(cents)
print(result[0])
print(result[1])
print(result[2])
print(result[3])