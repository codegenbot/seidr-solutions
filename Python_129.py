def minPath(grid, k):
    m, n = len(grid), len(grid[0])
    total_elements = m * n

    if k > total_elements:
        repeats = (k - 1) // total_elements
        remainder = (k - 1) % total_elements
        path = grid
        path = path * repeats + path[:remainder]
        return path

    # ... rest of the code remains the same