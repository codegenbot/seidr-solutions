```''
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    
    for i in range(0, cents + 1):
        result = []
        
        for coin in coins:
            while i >= coin:
                i -= coin
                result.append(coin)
                
        results.append(result)
                
    quarter_count = len(results[-1]) - (results[-1].count(25) if len(results[-1]) > 0 else 0)
    dime_count = results[-1].count(10)
    nickel_count = results[-1].count(5)
    penny_count = len(results[-1]) - quarter_count * 4 - dime_count * 2 - nickel_count
    
    return penny_count, nickel_count, dime_count, quarter_count

cents = int(input())
penny, nickel, dime, quarter = coin_sums(cents)
print(penny)
print(nickel)
print(dime)
print(quarter)