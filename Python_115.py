import math

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
        * 1 <= grid.length <= 10^2
        * 1 <= grid[:,1].length <= 10^2
        * grid[i][j] -> 0 | 1

    # Complete the following code given the task description and function signature.
    # You may use additional functions if you want.
    # You may also use other data structures if you want.
    # If you want to use other data structures, make sure to import them.

    # This is the grid that we will be returning.
    # It will be a copy of the input grid, but with the wells filled with water.
    filled_grid = grid

    # This is the number of times we lowered the bucket.
    lowered_count = 0

    # Here, you can add any additional code you need.

    # Return the filled grid and the number of times we lowered the bucket.
    return filled_grid, lowered_count


# This is a test function.
# It will run if you run this file.
# It will not run if you import this file.
# Feel free to modify this function.
def test():
    # These are the test cases.
    # Each test case is a tuple consisting of:
    #   - the grid
    #   - the capacity
    #   - the expected filled grid
    #   - the expected lowered count
    test_cases = [
        ([[0,0,1,0], [0,1,0,0], [1,1,1,1]], 1, [[0,0,1,0], [0,1,0,0], [1,1,1,1]], 6),
        ([[0,0,1,1], [0,0,0,0], [1,1,1,1], [0,1,1,1]], 2, [[0,0,1,1], [0,0,0,0], [1,1,1,1], [0,1,1,1]], 5),
        ([[0,0,0], [0,0,0]], 5, [[0,0,0], [0,0,0]], 0)
    ]

    # Loop through the test cases.
    for grid, capacity, expected_filled_grid, expected_lowered_count in test_cases:
        # Get the filled grid and lowered count.
        filled_grid, lowered_count = max_fill(grid, capacity)

        # Check if the filled grid is correct.
        if filled_grid != expected_filled_grid:
            # If it is not, print an error message.
            print(f'FAILURE: max_fill({grid}, {capacity}) returned {filled_grid}, but expected {expected_filled_grid}')
        else:
            # If it is, print a success message.
            print(f'SUCCESS: max_fill({grid}, {capacity}) returned {filled_grid}')

        # Check if the lowered count is correct.
        if lowered_count != expected_lowered_count:
            # If it is not, print an error message.
            print(f'FAILURE: max_fill({grid}, {capacity}) returned {lowered_count}, but expected {expected_lowered_count}')
        else:
            # If it is, print a success message.
            print(f'SUCCESS: max_fill({grid}, {capacity}) returned {lowered_count}')


# If this file is run (instead of imported), run the test function.
if __name__ == '__main__':
    test()
        * 1 <= capacity <= 10
    """
