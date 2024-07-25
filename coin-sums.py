def coin_sums(cents):
    quarters = cents // 25 if cents >= 25 else 0
    remaining = cents % 25
    dimes = remaining // 10 if remaining >= 10 else 0
    remaining %= 10
    nickles = remaining // 5 if remaining >= 5 else 0
    remaining %= 5
    pennies = remaining
    return f"{quarters}\n{dimes}\n{nickles}\n{pennies}"