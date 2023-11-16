
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

    # set up a counter
    count = 0

    # iterate over the grid
    for row in grid:
        # if the sum of the row is greater than the capacity
        if sum(row) > capacity:
            # iterate over the row
            for col in row:
                # if the col is greater than the capacity
                if col > capacity:
                    # increment the count by the capacity
                    count += capacity
                # otherwise
                else:
                    # increment the count by the col
                    count += col
        # otherwise
        else:
            # increment the count by the sum of the row
            count += sum(row)

    # return the count
    return count
        * 1 <= capacity <= 10
    """
