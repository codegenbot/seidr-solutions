```python
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    
    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append((coin, count))
            cents %= coin
    
    quarters = dimes = nickels = pennies = 0
    
    for coin, count in results:
        if coin == 25: 
            quarters += count
        elif coin == 10: 
            dimes += count
        elif coin == 5: 
            nickels += count
        else: 
            pennies += count
    
    return f"{quarters} quarters, {dimes} dimes, {nickels} nickels, {pennies} pennies"