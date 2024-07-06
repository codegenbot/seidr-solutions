def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    count = 0
    visited = set()
    queue = deque([(0, 0)])

    while queue:
        row, col = queue.popleft()
        if grid[row][col] == 1 and (row, col) not in visited:
            water += capacity
            count += 1
            visited.add((row, col))
            for r, c in [
                (row - 1, col),
                (row + 1, col),
                (row, col - 1),
                (row, col + 1),
            ]:
                if 0 <= r < rows and 0 <= c < cols and grid[r][c] == 1:
                    queue.append((r, c))
    return count