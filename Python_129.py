
def get_neighbors(grid, r, c):
    """
    Given a grid, a row index and a column index, return the indices of the
    neighbors of the cell with the given row and column indices.
    """
    n = len(grid)
    if r < 0 or r >= n or c < 0 or c >= n:
        return []
    neighbors = []
    if r > 0:
        neighbors.append((r - 1, c))
    if c > 0:
        neighbors.append((r, c - 1))
    if r < n - 1:
        neighbors.append((r + 1, c))
    if c < n - 1:
        neighbors.append((r, c + 1))
    return neighbors


def dfs(grid, k, seen, path, min_path, r, c):
    """
    Given a grid, a number k, a set of seen cells, a path, the minimum path, a
    row index and a column index, perform a depth-first search on the grid.
    """
    n = len(grid)
    if r < 0 or r >= n or c < 0 or c >= n:
        return
    if (r, c) in seen:
        return
    seen.add((r, c))
    path.append(grid[r][c])
    if len(path) == k:
        if path < min_path[0]:
            min_path[0] = path
        return
    for i, j in get_neighbors(grid, r, c):
        dfs(grid, k, seen, path.copy(), min_path, i, j)


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
    if k == 1:
        return [grid[0][0]]
    min_path = [list(range(1, n * n + 1))]
    for i in range(n):
        for j in range(n):
            dfs(grid, k, set(), [], min_path, i, j)
    return min_path[0]


if __name__ == '__main__':
    check(minPath)
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
