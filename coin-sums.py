
def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    remaining_cents = cents
    for i in range(len(coins)):
        while remaining_cents >= coins[i]:
            remaining_cents -= coins[i]
            counts[i] += 1
    return counts[0], counts[1], counts[2], counts[3]