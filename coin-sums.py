Here is the solution:

def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    outputs = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            cents -= coin
            outputs[coins.index(coin)] += 1

    return " ".join(map(str, outputs))