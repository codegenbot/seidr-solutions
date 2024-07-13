```
def coin_sums(cents):
    result = []
    quarters = cents // 25
    remainder = cents % 25
    nickels = remainder // 5
    remainder = remainder % 5
    dimes = remainder // 10
    pennies = remainder % 10
    if quarters > 0:
        result.append((quarters, "quarter" if quarters == 1 else "quarters"))
    if nickels > 0:
        result.append((nickels, "nickel" if nickels == 1 else "nickels"))
    if dimes > 0:
        result.append((dimes, "dime" if dimes == 1 else "dimes"))
    for _ in range(pennies):
        result.append((1, "penny"))
    return result

result = coin_sums(99)  
print("\n".join(f"{count} {name if count == 1 else f'{count} {name}s'}" for count, name in result))