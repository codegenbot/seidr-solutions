"""
Write a function to find the maximum number of buckets that can be filled from a given grid.
The grid is represented as a list of lists where each element is the height of the bucket.
The capacity represents the total amount of water that can be held in all the buckets.

Function max_fill(grid, capacity) should return an integer representing the maximum number of buckets that can be filled.

Example:
grid = [[1, 3, 4], [2, 5, 7], [8, 9, 10]]
capacity = 15
Output: 3

grid = [[0, 0, 0], [0, 0, 0]]
capacity = 5
Output: 5
"""
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / float(capacity))