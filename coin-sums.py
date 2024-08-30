def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickels, pennies
    outputs = []

    for i in range(0, len(coins)):
        count = min(cents // coins[i], len(range(cents)) // len(coins))
        outputs.extend([count] * (len(coins) - i))
        cents %= coins[i]

    return str(outputs[0]) + "\n" + " ".join(map(str, outputs[1:]))