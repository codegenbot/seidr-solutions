def max_fill(grid, capacity):
    return sum(math.ceil(sum(row) / capacity)) - min(
        len(grid), len([r for r in grid if any(r)])
    )