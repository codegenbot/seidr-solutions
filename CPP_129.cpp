[PYTHON]
def min_path(grid, start, goal):
    # Initialize the minimum path sum
    min_sum = float('inf')
    # Initialize the current position as the starting position
    current_position = start
    # Loop until the goal position is reached or the grid is fully traversed
    while not issame(current_position, goal) and not out_of_bounds(grid, current_position):
        # Calculate the minimum path sum for each neighboring cell
        for neighbor in get_neighbors(grid, current_position):
            min_sum = min(min_sum, grid[neighbor[0]][neighbor[1]])
        # Update the current position to the neighbor with the minimum path sum
        current_position = get_index(grid, min_sum)
    return min_sum

def out_of_bounds(grid, position):
    return position[0] < 0 or position[0] >= len(grid) or position[1] < 0 or position[1] >= len(grid[0])

def get_neighbors(grid, position):
    neighbors = []
    for i in range(-1, 2):
        for j in range(-1, 2):
            if i != 0 or j != 0:
                neighbor = (position[0] + i, position[1] + j)
                if not out_of_bounds(grid, neighbor) and grid[neighbor[0]][neighbor[1]] != '#':
                    neighbors.append(neighbor)
    return neighbors

def get_index(grid, position):
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == position:
                return (i, j)
    return None
[/PYTHON]
[TESTS]
# Test case 1:
assert min_path([[1, 3], [3, 2]], 10) == 11
# Test case 2:
assert min_path([[1, 3], [3, 2]], 100) == 19
# Test case 3:
assert min_path([[1, 3], [3, 2]], 1000) == 11
[/TESTS]
