    def minPath(grid, k):
        rows = len(grid)
        cols = len(grid[0])
        visited = set()
        queue = [(0, 0)]
        path = []

        while queue:
            x, y = queue.pop(0)
            if (x, y) not in visited:
                visited.add((x, y))
                path.append(grid[y][x])
                for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                    nx = x + dx
                    ny = y + dy
                    if 0 <= nx < rows and 0 <= ny < cols and (nx, ny) not in visited:
                        queue.append((nx, ny))
            if len(path) == k:
                break

        return path

# Test case 1:
assert minPath([[1, 3], [3, 2]], 10) == [1, 3, 1, 3, 1, 3, 1, 3, 1, 3]

# Test case 2:
assert minPath([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 10) == [1, 2, 3, 4, 5, 6, 7, 8, 9]

# Test case 3:
assert minPath([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 10) == [1, 2, 3, 4, 5, 6, 7, 8, 9]