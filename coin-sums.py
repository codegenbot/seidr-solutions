def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarter_amount = cents // 25
    remaining_cents = cents % 25
    nickel_amount = remaining_cents // 5
    remaining_cents %= 5
    dime_amount = remaining_cents // 10
    penny_amount = remaining_cents % 10
    
    return quarter_amount, nickel_amount, dime_amount, penny_amount