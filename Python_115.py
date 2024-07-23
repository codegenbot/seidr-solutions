```Python
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_volume = sum(
        int(val) for row in range(rows) for col, val in enumerate(grid[row]) if is_valid(row, col)
    )
    
    max_containers = math.ceil(total_volume / float(capacity))
    return max_containers