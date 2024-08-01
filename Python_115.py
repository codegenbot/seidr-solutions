```
def max_fill(grid, capacity):
    rows, cols = len(grid), len(grid[0])
    water = 0
    for i in range(rows):
        low = high = float('inf')
        for j in range(cols):
            if grid[i][j] < low:
                low = grid[i][j]
            elif grid[i][j] > high:
                high = grid[i][j]
            if high - low > 0:
                water += high - low
    return -(-water // capacity)