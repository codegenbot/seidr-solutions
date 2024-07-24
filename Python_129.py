def minPath(grid, k):
    N = len(grid)
    values = [[i * j for j in range(1, N + 1)] for i in range(1, N + 1)]
    current_position = (0, 0)
    visited = set()
    path = [values[current_position[0]][current_position[1]]]

    while len(path) < k:
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for direction in directions:
            new_position = (
                current_position[0] + direction[0],
                current_position[1] + direction[1],
            )
            if (
                0 <= new_position[0] < N
                and 0 <= new_position[1] < N
                and new_position not in visited
            ):
                if values[new_position[0]][new_position[1]] not in path:
                    current_position = new_position
                    visited.add(current_position)
                    path.append(values[current_position[0]][current_position[1]])
                    break

    return path