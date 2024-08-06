```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    outputs = []
    for coin in coins:
        outputs.append(cents // coin)
        cents %= coin
    return outputs[0], outputs[1], outputs[2], outputs[3]

cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(quarters)
print(dimes)
print(nickles)
print(pennies)