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
            min_sum = current_value
        else:
            # If the current position is not the destination, add its neighbors to the queue
            for neighbor in get_neighbors(grid, current_position):
                queue.append(neighbor)
    # Return the minimum path sum
    return min_sum

def get_neighbors(grid, position):
    # Get the row and column of the current position
    row, col = position
    # Initialize an empty list to store the neighbors
    neighbors = []
    # Check if the cell to the north is valid
    if row > 0:
        # If the cell to the north is valid, add it to the list of neighbors
        neighbors.append((row - 1, col))
    # Check if the cell to the south is valid
    if row < len(grid) - 1:
        # If the cell to the south is valid, add it to the list of neighbors
        neighbors.append((row + 1, col))
    # Check if the cell to the west is valid
    if col > 0:
        # If the cell to the west is valid, add it to the list of neighbors
        neighbors.append((row, col - 1))
    # Check if the cell to the east is valid
    if col < len(grid[0]) - 1:
        # If the cell to the east is valid, add it to the list of neighbors
        neighbors.append((row, col + 1))
    # Return the list of neighbors
    return neighbors

def issame(a, b):
    return a == b
[/PYTHON]
[TESTS]
# Test case 1:
assert min_path(grid=[[1, 2, 3], [4, 5, 6], [7, 8, 9]], k=3) == [1, 2, 1]
# Test case 2:
assert min_path(grid=[[5, 9, 3], [4, 1, 6], [7, 8, 2]], k=1) == [1]
# Test case 3:
assert min_path(grid=[[1, 2, 3], [4, 5, 6], [7, 8, 9]], k=4) == [1, 2, 3, 4]
# Test case 4:
assert min_path(grid=[[1, 2, 3], [4, 5, 6], [7, 8, 9]], k=5) == [1, 2, 3, 4, 5]
# Test case 5:
assert min_path(grid=[[1, 2, 3], [4, 5, 6], [7, 8, 9]], k=6) == [1, 2, 3, 4, 5, 6]
# Test case 6:
assert min_path(grid=[[1, 2, 3], [4, 5, 6], [7, 8, 9]], k=7) == [1, 2, 3, 4, 5, 6, 7]
# Test case 7:
assert min_path(grid=[[1, 2, 3], [4, 5, 6], [7, 8, 9]], k=8) == [1, 2, 3, 4, 5, 6, 7, 8]
# Test case 8:
assert min_path(grid=[[1, 2, 3], [4, 5, 6], [7, 8, 9]], k=9) == [1, 2, 3, 4, 5, 6, 7, 8, 9]
[/TESTS]
