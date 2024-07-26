```
def coin_sum(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents

    print(f"{quarters} quarter{'s' if quarters > 1 else ''}")
    print(f"{dimes} dime{'s' if dimes > 1 else ''}")
    print(f"{nickles} nickel{'s' if nickles > 1 else ''}")
    print(f"{pennies} penny{'s' if pennies > 1 else ''}")

coin_sum(1779)