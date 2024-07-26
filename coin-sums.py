def coin_sum(cents):
    denominations = [1, 5, 10, 25]
    pennies, nickels, dimes, quarters = 0, 0, 0, 0
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            if i == 0:
                pennies += count
            elif i == 1:
                nickels += count
            elif i == 2:
                dimes += count
            else:
                quarters += count
            cents -= denominations[i] * count
    return pennies, nickels, dimes, quarters

cents = int(input("Enter the number of cents: "))
pennies, nickels, dimes, remaining_cents = coin_sum(cents)
print(f"{pennies} pennies, {nickels} nickels, {dimes} dimes, and {remaining_cents} cents")