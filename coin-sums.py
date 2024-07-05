def coin_sums(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickels = cents // 5
    cents %= 5
    pennies = cents
    print(pennies)
    print(nickels)
    print(dimes)
    print(quarters)


if __name__ == "__main__":
    cents = int(input().strip())
    coin_sums(cents)