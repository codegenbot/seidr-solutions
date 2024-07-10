def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for i in range(n)] for j in range(n)]

    res = []
    cur_pos = (0, 0)
    visited = set()

    while len(res) < k:
        if cur_pos in visited:
            break
        visited.add(cur_pos)

        pos_values = [(i, j) for i in range(n) for j in range(n)]
        pos_values.sort(key=lambda x: m[x[0]][x[1]])
        pos_values.sort()

        min_value = float("inf")
        new_cur_pos = None
        for pos in pos_values:
            if pos not in visited and m[pos[0]][pos[1]] < min_value:
                min_value = m[pos[0]][pos[1]]
                new_cur_pos = pos

        res.append(min_value)
        cur_pos = new_cur_pos

    return res