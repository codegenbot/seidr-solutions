
def max_fill(grid, capacity):    
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
        * 1 <= grid.length <= 10^2 (2 <= grid.length <= 10^2)
        * 1 <= grid[:,1].length <= 10^2 (2 <= grid[:,1].length <= 10^2)
        * grid[i][j] -> 0 | 1
    # TODO: complete the following code

    # grid.length = number of rows
    # grid[:,1].length = number of columns
    # capacity = bucket capacity

    # Iterate through the grid
    #   For each row, check to see if the bucket fits in the well
    #       If it does, subtract the capacity from the well
    #       If it doesn't, subtract the well's capacity from the bucket
    #   Increment the number of times the bucket was lowered

    num_times_lowered = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if capacity < grid[i][j]:
                grid[i][j] -= capacity
                num_times_lowered += 1
            else:
                num_times_lowered += 1
                capacity -= grid[i][j]
    
    return num_times_lowered
    return 
        * 1 <= capacity <= 10 (2 <= capacity <= 10)
    """
