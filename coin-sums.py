```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarter_count = dime_count = nickel_count = penny_count = 0
    pennies_needed = cents
    
    for coin in coins:
        count = pennies_needed // coin
        if count > 0:
            pennies_needed -= count * coin
            if coin == 25: 
                quarter_count += count
            elif coin == 10:
                dime_count += count
            elif coin == 5:
                nickel_count += count
            else:
                penny_count += count

    return quarter_count, dime_count, nickel_count, penny_count


cents = int(input())
quarter_count, dime_count, nickel_count, penny_count = coin_sums(cents)
print(quarter_count)
print(dime_count)
print(nickel_count)
print(penny_count)