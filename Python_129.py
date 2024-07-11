def shortestPathBinaryMaze(maze):
    if not maze:
        return []

    n = len(maze)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = deque([(i, j) for i in range(n) for j in range(n) if maze[i][j] == 1])
    visited = set((i, j) for i, j in queue)
    level = 0
    shortest_paths = []

    while queue:
        for _ in range(len(queue)):
            x, y = queue.popleft()
            if (x, y) not in visited:
                visited.add((x, y))
                for dx, dy in directions:
                    nx, ny = x + dx, y + dy
                    if (
                        0 <= nx < n
                        and 0 <= ny < n
                        and maze[nx][ny] == 1
                        and (nx, ny) not in visited
                    ):
                        queue.append((nx, ny))
        level += 1

    return [level - 1]