```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarter_count = dime_count = nickel_count = penny_count = 0
    remaining_cents = cents

    for coin in sorted(coins, reverse=True):
        while remaining_cents >= coin:
            remaining_cents -= coin
            if coin == 25: quarter_count += 1
            elif coin == 10: dime_count += 1
            elif coin == 5: nickel_count += 1
            else: penny_count += 1

    return quarter_count, dime_count, nickel_count, penny_count


cents = int(input())
quarter_count, dime_count, nickel_count, penny_count = coin_sums(cents)
print(quarter_count)
print(dime_count)
print(nickel_count)
print(penny_count)