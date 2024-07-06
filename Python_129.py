def minPath(grid, k):
    # Initialize the minimum path and its length
    min_path = []
    min_length = float("inf")

    # Initialize the queue with all possible starting cells
    queue = [(cell, 0) for cell in grid[0]]

    while queue:
        # Get the next cell and its current path length
        cell, length = queue.pop(0)

        # If the current path length is less than the minimum path length, update the minimum path and length
        if length < min_length:
            min_path = [cell]
            min_length = length

        # If the current cell is not the last cell in the grid, add its neighboring cells to the queue
        if cell != grid[-1][-1]:
            for neighbor in get_neighbors(grid, cell):
                queue.append((neighbor, length + 1))

    return min_path


def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row, col = cell

    # Initialize a list to store the neighboring cells
    neighbors = []

    # Check if the cell is on the edge of the grid
    if row == 0 or col == 0:
        # If the cell is on the edge of the grid, add its adjacent cells to the list of neighbors
        for i in range(1, k):
            if row + i < len(grid) and col + i < len(grid[row]):
                neighbors.append((row + i, col + i))
            if row - i >= 0 and col - i >= 0:
                neighbors.append((row - i, col - i))
        return neighbors
    else:
        # If the cell is not on the edge of the grid, add its adjacent cells to the list of neighbors
        for i in range(1, k):
            if row + i < len(grid) and col + i < len(grid[row]):
                neighbors.append((row + i, col + i))
            if row - i >= 0 and col - i >= 0:
                neighbors.append((row - i, col - i))
        return neighbors