from itertools import product
from collections import defaultdict

def minPath(grid, k, memo, path):
    N = len(grid)
    if k == 0:
        return
    
    for row, col in product(range(N), range(N)):
        if (row, col) in memo:
            continue
        if grid[row][col] in path:
            continue
        path.append(grid[row][col])
        if len(path) == k:
            memo[(row, col)] = path[:]
        else:
            minPath(grid, k, memo, path)
        path.pop()

def minPath2(grid, k, memo, path, row, col):
    N = len(grid)
    if row < 0 or row >= N or col < 0 or col >= N:
        return
    if grid[row][col] in path:
        return

    Examples:

        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
