Here is the solution:

def coin_sums(cents):
    coins = [25, 10, 5, 1]
    p = cents // 25
    q = (cents % 25) // 10
    d = (cents % 10) // 5
    n = cents % 5

    return p, q, d, n