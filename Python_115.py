"""
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_volume = sum(int(val) for row in range(rows) for col, val in enumerate(grid[row]) if is_valid(row, col))
    return math.floor(total_volume / float(capacity)) + (1 if total_volume % capacity != 0 else 0)
"""