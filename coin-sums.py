```
def coin_sum(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents

    print(f"{quarters} quarters")
    print(f"{dimes} dimes")
    print(f"{nickles} nickles")
    print(f"{pennies} pennies")

coin_sum(1779)