def coin_sums(n):
    quarters = n // 25
    n %= 25
    dimes = n // 10
    n %= 10
    nickels = n // 5
    n %= 5
    pennies = n
    return quarters, dimes, nickels, pennies


n = int(input())
quarters, dimes, nickels, pennies = coin_sums(n)
print(quarters)
print(dimes)
print(nickels)
print(pennies)