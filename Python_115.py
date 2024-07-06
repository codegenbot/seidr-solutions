```
def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        row1, row2 = grid[i], grid[-i - 1]
        j = min(len(row1), len(row2))
        while j > 0:
            h1, h2 = row1[j-1], row2[j-1]
            if h1 > 0 and h2 > 0:
                water = min(h1, h2)
                row1[j-1] -= water
                row2[j-1] -= water
                total_water += water
            elif h1 > 0:
                water = h1
                row1[j-1] -= water
                total_water += water
            else:
                water = h2
                row2[j-1] -= water
                total_water += water
            j -= 1
    return total_water