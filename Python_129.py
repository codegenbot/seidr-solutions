from itertools import permutations

def get_neighbours(grid, i, j):
    n = len(grid)
    m = len(grid[0])
    res = []
    if i > 0:
        res.append(grid[i-1][j])
    if i < n-1:
        res.append(grid[i+1][j])
    if j > 0:
        res.append(grid[i][j-1])
    if j < m-1:
        res.append(grid[i][j+1])
    return res

def find_path(grid, k, path):
    if k == 0:
        return path
    i = path[-1] // len(grid)
    j = path[-1] % len(grid)
    neighbours = get_neighbours(grid, i, j)
    for neighbour in neighbours:
        if neighbour not in path:
            res = find_path(grid, k-1, path + [neighbour])
            if res:
                return res
    return None

def find_all_paths(grid, k):
    n = len(grid)
    m = len(grid[0])
    res = []
    for i in range(n):
        for j in range(m):
            res.append(find_path(grid, k, [grid[i][j]]))
    return res

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

    # Your code goes here
    # Please use the following function signature
    # def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    all_paths = find_all_paths(grid, k)
    all_paths = [path for path in all_paths if path is not None]
    all_paths = sorted(all_paths, key=lambda x: (x, grid[x[0] // n][x[0] % n]))
    return all_paths[0]

def check(func):
    test_cases = [
        [[[1, 3], [3, 2]], 2, [1, 3, 1]],
        [[[1, 3], [3, 2]], 10, [1, 3, 1, 3, 1, 3, 1, 3, 1, 3]],
        [[[1, 2, 3], [4, 5, 6], [7, 8, 9]], 3, [1, 2, 1]],
        [[[5, 9, 3], [4, 1, 6], [7, 8, 2]], 1, [1]]
    ]
    for grid, k, expected in test_cases:
        assert func(grid, k) == expected

if __name__ == '__main__':
    check(minPath)
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
