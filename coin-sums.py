Here is the solution:

def coin_sums():
    cents = int(input())
    quarters = cents // 25
    remaining_cents = cents % 25
    nickles = remaining_cents // 5
    remaining_cents %= 5
    dimes = remaining_cents // 10
    pennies = remaining_cents % 10
    
    return quarters, nickles, dimes, pennies