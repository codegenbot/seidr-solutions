def minPath(grid, k):
    # Initialize the minimum path and its length
    min_path = []
    min_len = float("inf")

    # Loop through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # If the current cell is not the starting point, skip it
            if grid[i][j] != 1:
                continue

            # Perform BFS to find the shortest path from the starting point to the end point
            queue = [(i, j)]
            visited = set()
            while queue:
                x, y = queue.pop(0)
                if grid[x][y] == k:
                    return [1, 3, ..., k]  # Replace with actual path
                for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < len(grid) and 0 <= ny < len(grid[i]):
                        queue.append((nx, ny))
                        visited.add((nx, ny))