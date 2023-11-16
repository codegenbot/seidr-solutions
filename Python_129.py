from collections import deque


def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:

    n = len(grid)
    # calculate the minimum path from each cell to each cell
    min_paths = [[None] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            min_paths[i][j] = _min_path(grid, i, j)
    # calculate the minimum path from each cell to each cell with length k
    min_paths_k = [[None] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            min_paths_k[i][j] = _min_path_k(min_paths, i, j, k)
    # calculate the minimum path from each cell to each cell with length k
    # and with the minimum total sum
    min_paths_k_sum = [[(None, None)] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            min_paths_k_sum[i][j] = _min_path_k_sum(min_paths_k, i, j)
    # find the minimum path from each cell to each cell with length k
    # and with the minimum total sum
    min_paths_k_sum_min = _min_path_k_sum_min(min_paths_k_sum)
    return min_paths_k_sum_min


def _min_path(grid, i, j):
    """
    Return the minimum path from grid[i][j] to each cell.
    """
    n = len(grid)
    res = [[None] * n for _ in range(n)]
    q = deque()
    q.append((i, j, [grid[i][j]]))
    while q:
        i, j, path = q.popleft()
        if res[i][j] is not None and len(res[i][j]) < len(path):
            continue
        res[i][j] = path
        for x, y in ((i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)):
            if 0 <= x < n and 0 <= y < n and (res[x][y] is None or len(res[x][y]) > len(path)):
                q.append((x, y, path + [grid[x][y]]))
    return res


def _min_path_k(min_paths, i, j, k):
    """
    Return the minimum path from min_paths[i][j] to each cell with length k.
    """
    n = len(min_paths)
    res = [[None] * n for _ in range(n)]
    q = deque()
    q.append((i, j, min_paths[i][j][:k]))
    while q:
        i, j, path = q.popleft()
        if res[i][j] is not None and len(res[i][j]) < len(path):
            continue
        res[i][j] = path
        for x, y in ((i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)):
            if 0 <= x < n and 0 <= y < n and (res[x][y] is None or len(res[x][y]) > len(path)):
                q.append((x, y, path + [min_paths[x][y][len(path)]]))
    return res


def _min_path_k_sum(min_paths_k, i, j):
    """
    Return the minimum path from min_paths_k[i][j] to each cell with length k
    and with the minimum total sum.
    """
    n = len(min_paths_k)
    res = [(None, None)] * n
    q = deque()
    q.append((i, j, min_paths_k[i][j], sum(min_paths_k[i][j])))
    while q:
        i, j, path, path_sum = q.popleft()
        if res[i][j][0] is not None and res[i][j][1] < path_sum:
            continue
        res[i][j] = (path, path_sum)
        for x, y in ((i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)):
            if 0 <= x < n and 0 <= y < n and (res[x][y][0] is None or res[x][y][1] > path_sum):
                q.append((x, y, path + [min_paths_k[x][y][len(path)]], path_sum + min_paths_k[x][y][len(path)]))
    return res


def _min_path_k_sum_min(min_paths_k_sum):
    """
    Return the minimum path from each cell to each cell with length k
    and with the minimum total sum.
    """
    res = None
    for row in min_paths_k_sum:
        for path, _ in row:
            if res is None or res > path:
                res = path
    return res
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
