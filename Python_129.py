def findShortestWay(board, help):
    m = len(board)
    n = len(board[0])
    target = help[1:]
    k = help[0]

    def bfs(x, y):
        queue = [(x, y, "")]
        visited = set((x, y))

        while queue:
            x, y, path = queue.pop(0)

            if board[x][y] == target[0]:
                return path

            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = x + dx, y + dy

                if (nx, ny) not in visited and 0 <= nx < m and 0 <= ny < n:
                    queue.append(
                        (nx, ny, path + chr(97 + ord(board[nx][ny]) - ord("A")))
                    )
                    visited.add((nx, ny))

        return ""

    shortest_path = bfs(0, 0)

    for i in range(m):
        if all(board[i][j] == target[0] for j in range(n)):
            path = bfs(i, 0)
            if len(path) < len(shortest_path):
                shortest_path = path
    return "".join(sorted(set(shortest_path), key=shortest_path.index)) if k > 0 else []