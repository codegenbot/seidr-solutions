[PYTHON]
def min_path(grid, k):
    # Initialize the minimum path sum
    min_sum = float('inf')
    # Initialize the current position as (0, 0)
    current_position = (0, 0)
    # Initialize the queue with the current position
    queue = [current_position]
    # Loop until the queue is empty or the minimum path sum is found
    while queue and min_sum == float('inf'):
        # Get the current position from the queue
        current_position = queue.pop(0)
        # Get the value at the current position
        current_value = grid[current_position[0]][current_position[1]]
        # Check if the current position is the destination
        if current_position == (len(grid) - 1, len(grid[0]) - 1):
            # If the current position is the destination, update the minimum path sum
            min_sum = min(min_sum, current_value)
        # Add the neighbors of the current position to the queue
        for neighbor in get_neighbors(grid, current_position):
            queue.append(neighbor)
    return min_sum

def get_neighbors(grid, position):
    neighbors = []
    # Check the north neighbor
    if position[0] > 0:
        neighbors.append((position[0] - 1, position[1]))
    # Check the south neighbor
    if position[0] < len(grid) - 1:
        neighbors.append((position[0] + 1, position[1]))
    # Check the west neighbor
    if position[1] > 0:
        neighbors.append((position[0], position[1] - 1))
    # Check the east neighbor
    if position[1] < len(grid[0]) - 1:
        neighbors.append((position[0], position[1] + 1))
    return neighbors
[/PYTHON]
[TESTS]
# Test case 1:
assert min_path({{1, 3}, {3, 2}}, 10) == 10
# Test case 2:
assert min_path({{1, 3}, {3, 2}}, 10) == 10
# Test case 3:
assert min_path({{1, 3}, {3, 2}}, 10) == 10
[/TESTS]
