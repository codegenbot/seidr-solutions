
def max_fill(grid, bucket_capacity):
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
    for row in grid:
        if len(row) != len(grid[0]):
            raise ValueError('All rows must have the same length.')

    if len(grid) < 1 or len(grid) > 100:
        raise ValueError('The number of rows must be between 1 and 10^2.')

    if len(grid[0]) < 1 or len(grid[0]) > 100:
        raise ValueError('The number of columns must be between 1 and 10^2.')

    if bucket_capacity < 1 or bucket_capacity > 10:
        raise ValueError('The bucket capacity must be between 1 and 10.')

    for row in grid:
        for column in row:
            if column != 0 and column != 1:
                raise ValueError('All grid values must be 0 or 1.')

    return math.ceil(sum(sum(row) for row in grid) / bucket_capacity)
        * 1 <= capacity <= 10
    """
