```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = 1
            cents -= coins[i]
            result[i] += count

    return (
        [f"{count} quarter{'s' if count > 1 else ''}" for count in [result[0]]],
        [f"{count} dime{'s' if count > 1 else ''}" for count in [result[1]]],
        [f"{count} nickel{'s' if count > 1 else ''}" for count in [result[2]]],
        [f"{count} penny{'s' if count > 1 else ''}" for count in [result[3]]]
    )