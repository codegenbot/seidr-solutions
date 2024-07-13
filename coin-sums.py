```
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = [[0, 0, 0, 0]]

    for quarter in range((cents // 25) + 1):
        remaining_cents = cents - quarter * 25
        for dime in range((remaining_cents // 10) + 1):
            remaining_cents -= dime * 10
            for nickel in range((remaining_cents // 5) + 1):
                remaining_cents -= nickel * 5
                num_pennies = remaining_cents
                results.append([quarter, dime, nickel, num_pennies])

    min_coins = [0, 0, 0, 0]
    for result in results:
        if sum(result[:3]) <= cents and sum(result) < sum(min_coins):
            min_coins = list(result)

    return min_coins