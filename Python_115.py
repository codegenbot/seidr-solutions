
def max_fill(grid, capacity):
    import math
    """
    You are given a rectangular grid of wells. Each row represents a single well,
    and each 1 in a row represents a single unit of water.
    Each well has a corresponding bucket that can be used to extract water from it, 
    and all buckets have the same capacity.
    Your task is to use the buckets to empty the wells.
    Output the number of times you need to lower the buckets.

    Example 1:
        Input: 
            grid : [[0,0,1,0], [0,1,0,0], [1,1,1,1]]
            bucket_capacity : 1
        Output: 6

    Example 2:
        Input: 
            grid : [[0,0,1,1], [0,0,0,0], [1,1,1,1], [0,1,1,1]]
            bucket_capacity : 2
        Output: 5
    
    Example 3:
        Input: 
            grid : [[0,0,0], [0,0,0]]
            bucket_capacity : 5
        Output: 0

    Constraints:
        * all wells have the same length
        * 1 <= grid.length <= 10^2
        * 1 <= grid[:,1].length <= 10^2
        * grid[i][j] -> 0 | 1
    npsh = math.inf
    for r, row in enumerate(grid):
        ns = row.count(1)
        sh = capacity * ns
        npsh = prod(row, ns, sh, npsh)
        if npsh == 0:
            break
    return npsh

def prod(row, ns, sh, npsh):
    for c, col in enumerate(row):
        if col == 0:
            continue
        for rr in range(ns, -1, -1):
            t = sh * r - rr
            if npsh > t:
                fill(row, c, ns)
                npsh = t
                break
            if t == 0:
                break

def fill(row, c, ns):
    for i in range(c + 1, len(row)):
        if row[i] > row[c] or row[i] == -1:
            row[i] = -1
            c = i
        else:
            break
    return row
        * 1 <= capacity <= 10
    """
