from collections import deque


def minPath(grid, k):
    # Initialize a priority queue to keep track of the minimum path and its length
    pq = deque([(1, 0)], maxlen=k)

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # If the current cell is not the starting point, skip it
            if grid[i][j] != 1:
                continue

            # Initialize a queue to perform BFS
            queue = [(i, j)]

            # Perform BFS until we reach the end of the path or the length of the path exceeds k
            while queue and len(queue) <= k:
                x, y = queue.pop(0)

                # If we have reached the end of the path, update the minimum path and its length
                if grid[x][y] == k:
                    min_path = [(i, j)] + queue
                    min_len = len(queue)

                    # Add the current path to the priority queue
                    pq.append((min_path, min_len))

                # Add neighbors to the queue
                for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < len(grid) and 0 <= ny < len(grid[i]):
                        queue.append((nx, ny))

    # Return the minimum path
    return pq.popleft()[0]