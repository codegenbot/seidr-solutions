
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

    # TODO: Complete the following code given the task description and function signature.
    # You are free to add additional helper functions as needed.

    # HINT: You can think of the problem as a flow problem.
    # The wells are the nodes and the buckets are the edges.
    # You can treat the buckets as having infinite capacity.
    # You can also think of the problem as a graph search problem.
    # The wells are the nodes and the buckets are the edges.
    # You can treat the buckets as having infinite capacity.
    # You can also think of the problem as a graph search problem.
    # The wells are the nodes and the buckets are the edges.
    # You can treat the buckets as having infinite capacity.

    # NOTE: You are free to use any graph search algorithm you know.

    # NOTE: You are free to use any data structure you know.

    return 0
        * 1 <= capacity <= 10
    if capacity == 0:
        return 0
    if len(grid) == 0:
        return 0
    if len(grid[0]) == 0:
        return 0

    # put it into a matrix
    matrix = [[0 for i in range(len(grid[0]))] for j in range(len(grid))]
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            matrix[i][j] = grid[i][j]

    # start filling the matrix
    # go through each column
    for i in range(len(grid[0])):
        # go through each row
        for j in range(len(grid)):
            # if it's a 1
            if matrix[j][i] == 1:
                if j == len(grid) - 1:
                    matrix[j][i] = 0
                else:
                    # check if there is enough space in the bucket
                    if capacity > 1:
                        matrix[j][i] = 0
                        matrix[j + 1][i] = 1
                        capacity = capacity - 1
                    else:
                        matrix[j][i] = 0

    # count the number of 1s
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if matrix[i][j] == 1:
                count += 1

    return count
    """
