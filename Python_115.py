
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

    # 1. Find the max value in the grid
    # 2. Find the number of times we need to lower the bucket to fill the max value
    # 3. Find the number of times we need to lower the bucket to fill the rest of the grid
    # 4. Return the sum of the above two values

    # 1. Find the max value in the grid
    max_value = 0
    for row in grid:
        max_value = max(max_value, max(row))

    # 2. Find the number of times we need to lower the bucket to fill the max value
    max_value_bucket_count = math.ceil(max_value/capacity)

    # 3. Find the number of times we need to lower the bucket to fill the rest of the grid
    rest_bucket_count = 0
    for row in grid:
        for cell in row:
            if cell != 0:
                rest_bucket_count += math.ceil(cell/capacity)

    # 4. Return the sum of the above two values
    return max_value_bucket_count + rest_bucket_count


if __name__ == "__main__":
    grid = [[0,0,1,0], [0,1,0,0], [1,1,1,1]]
    capacity = 1
    print(max_fill(grid, capacity))

    grid = [[0,0,1,1], [0,0,0,0], [1,1,1,1], [0,1,1,1]]
    capacity = 2
    print(max_fill(grid, capacity))

    grid = [[0,0,0], [0,0,0]]
    capacity = 5
    print(max_fill(grid, capacity))
        * 1 <= capacity <= 10
    """
