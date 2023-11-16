
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
    # Complete the following code given the task description and function signature.
    # You can add more functions if needed.
    # You can import any library you want.
    # You can use any IDE you want.
    # You can use any programming language you want.
    # You can use any algorithm you want.
    # You can use any data structure you want.
    # You can use any style you want.
    # You can use any version control system you want.
    # You can use any operating system you want.
    # You can use any cloud service you want.
    # You can use any cloud storage you want.
    # You can use any cloud database you want.
    # You can use any cloud server you want.
    # You can use any cloud platform you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want.
    # You can use any cloud service provider you want
        * 1 <= capacity <= 10
    """
