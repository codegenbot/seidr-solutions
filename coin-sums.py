```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_per_coin = [4, 2, 1, 1]
    
    num_quarters = cents // 25
    remaining_cents = cents % 25
    
    num_dimes = remaining_cents // 10
    remaining_cents %= 10
    
    num_nickles = remaining_cents // 5
    remaining_cents %= 5
    
    pennies = remaining_cents
    
    return num_quarters, num_dimes, num_nickles, pennies

cents = int(input())
num_quarters, num_dimes, num_nickles, pennies = coin_sums(cents)
print(num_quarters)
print(num_dimes)
print(num_nickles)
print(pennies)