```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    
    for i in range((cents // 25) + 1):
        if cents >= 25:
            cents -= 25
            results.append(1)
        else:
            results.append(0)

    for i in range((cents // 10) + 1):
        if cents >= 10:
            cents -= 10
            results.insert(0, 1)
        else:
            results.insert(0, 0)

    for i in range((cents // 5) + 1):
        if cents >= 5:
            cents -= 5
            results.insert(0, 1)
        else:
            results.insert(0, 0)

    for i in range(cents):
        results.insert(0, 1)
    
    return results[0], results[1], results[2], results[3]

cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(pennies)
print(nickles)
print(dimes)
print(quarters)