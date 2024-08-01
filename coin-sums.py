Here is the completed code:

def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    return len([coin for coin in coins if cents >= coin]) , (cents // 25), (cents % 25) // 10, (cents % 10) // 5, cents % 5