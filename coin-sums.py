def coin_sum(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents

    return f"{quarters} quarters\n{dimes} dimes\n{nickles} nickles\n{pennies} pennies"