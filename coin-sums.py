```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    combinations = []
    
    for i in range(len(coins)+1):
        for c in combinations:
            for j in range(i+1):
                if c[j] + j*coins[i] > cents:
                    break
            else:
                if sum(c) + j*coins[i] == cents:
                    combinations.append(c+[j])
                    
    quarters, nickles, dimes, pennies = 0,0,0,0
    
    for c in combinations:
        if len(c) == 4 and c[0] > 0:
            quarters = c[0]
            nickles = c[1]
            dimes = c[2]
            pennies = c[3]
            break
            
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)