```
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    
    for i in range(0, cents + 1):
        ways = [0] * (cents + 1)
        
        for j in range(0, len(coins)):
            if coins[j] <= i:
                ways[i] += ways[i - coins[j]] + 1
                
        results.append(ways[cents])
    
    quarters = cents // 25
    remaining = cents % 25
    
    nickles = remaining // 5
    remaining = remaining % 5
    
    dimes = remaining // 10
    remaining = remaining % 10
    
    pennies = remaining
    
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)