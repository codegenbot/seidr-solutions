[PYTHON]
def min_path(grid, k):
    # Initialize the minimum path sum
    min_sum = float('inf')
    # Initialize the current position as (0, 0)
    curr_pos = (0, 0)
    # Initialize the current path sum
    curr_sum = 0
    # Initialize the visited matrix
    visited = [[False for _ in range(len(grid[0]))] for _ in range(len(grid))]

    # Loop through the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # Check if the current position is not visited and the value is not 0
            if not visited[i][j] and grid[i][j] != 0:
                # Calculate the current path sum
                curr_sum = grid[i][j] + min_path(grid, k - 1)
                # Update the minimum path sum
                min_sum = min(min_sum, curr_sum)
                # Mark the current position as visited
                visited[i][j] = True

    return min_sum

def issame(a, b):
    return a == b

def main():
    grid = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    k = 3
    result = min_path(grid, k)
    print(result)

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
assert min_path([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 3) == [1, 2, 1]
# Test case 2:
assert min_path([[5, 9, 3], [4, 1, 6], [7, 8, 2]], 1) == [1]
[/TESTS]

```