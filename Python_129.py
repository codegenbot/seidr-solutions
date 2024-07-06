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