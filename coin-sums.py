def """coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarter, nickel, dime, penny = 0, 0, 0, 0
    
    while cents >= 25:
        quarter += 1
        cents -= 25
    while cents >= 10:
        dime += 1
        cents -= 10
    while cents >= 5:
        nickel += 1
        cents -= 5
    penny = cents
    
    return quarter, nickel, dime, penny