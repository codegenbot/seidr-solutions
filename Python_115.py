
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
    num = 0
    for i in range(2**len(grid)):
        row = format(i, 'b').zfill(len(grid))
        temp = [[int(y) for y in j] for j in [[int(y)*grid[i-1][x] for y in row] for x in range(len(grid[0]))]]
        if type(grid[0][0])!=str:
            if sum(sum(x) for x in grid)==sum(sum(x) for x in temp):
                num = max(i,num)
        else:
            filter0 = [['-','-',0,1],['-','-',0,0]]
            filter1 = [['-',0,1,'-'],['-','+','+','-']]
            if any(map(lambda x: map(list, x), [filter0, filter1])):
                if min(list(map(min,temp)))>=0:
                    num = max(i,num)
    return num

        * 1 <= capacity <= 10
    """
