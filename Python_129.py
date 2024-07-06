import collections


def minPath(grid, k):
    # ... existing code ...

    n = int(input("Enter the size of the grid: "))
    m = int(input("Enter the number of steps: "))
    k = int(
        input("Enter the maximum allowed value for the sum of the elements in a path: ")
    )

    # Initialize the priority queue
    pq = collections.deque()

    # Add the first node to the priority queue
    pq.append((0, 0, grid[0][0]))

    # Loop until the priority queue is empty
    while pq:
        # Get the node with the minimum distance from the queue
        dist, x, y = pq.popleft()

        # If we have reached the goal, return the distance
        if x == n - 1 and y == m - 1:
            return dist

        # Loop through all possible moves from the current node
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            # Get the coordinates of the next node
            x2 = x + dx
            y2 = y + dy

            # Check if the next node is valid and has not been visited before
            if 0 <= x2 < n and 0 <= y2 < m and grid[x2][y2] != "X":
                # Calculate the distance to the next node
                dist2 = dist + 1

                # Add the next node to the priority queue
                pq.append((dist2, x2, y2))

    # If we have reached this point, it means that there is no path from the start to the goal
    return -1