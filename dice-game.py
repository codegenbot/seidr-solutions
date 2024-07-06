```
def dice_game(n, m):
    total_ways = n*m
    ways_peterwins = 0
    ways_tied = 0

    for i in range(1, min(n, m)+1):
        ways_tied += min(n, m) - i + 1

    ways_peterwins = total_ways - ways_tied

    return ways_peterwins / total_ways