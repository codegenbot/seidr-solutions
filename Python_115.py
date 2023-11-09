
def max_fill(grid, bucket_capacity):
    import math
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                for k in range(bucket_capacity):
                    if j+k >= len(grid[0]):
                        break
                    if grid[i][j+k] == 1:
                        grid[i][j+k] = 0
                    else:
                        break
                count += 1
    for i in range(len(grid[0])):
        for j in range(len(grid)):
            if grid[j][i] == 1:
                for k in range(bucket_capacity):
                    if j+k >= len(grid):
                        break
                    if grid[j+k][i] == 1:
                        grid[j+k][i] = 0
                    else:
                        break
                count += 1
    return count
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
    # Write your code here
if __name__ == "__main__":
    assert max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9) == 2, "Error"
        * 1 <= capacity <= 10
    """
