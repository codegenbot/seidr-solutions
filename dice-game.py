def dice_game(n, m):
    total_ways = n*m
    ways_peterwins = 0

    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                ways_peterwins += 1

    total_ways -= min(n, m)

    return ways_peterwins / total_ways