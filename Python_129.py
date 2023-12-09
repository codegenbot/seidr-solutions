
```
def minPath(grid, k):
    from collections import deque
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    total_cells = n * m
    path = []
    visited = set()
    queue = deque([(0, 0, 1)])
    
    while queue:
        i, j, curr_len = queue.popleft()
        
        # Check if the current cell is not a wall and has not been visited before
        if grid[i][j] != -1 and (i, j) not in visited:
            # Mark the current cell as visited
            visited.add((i, j))
            
            # If the length of the path is equal to k, add it to the result
            if curr_len == k:
                path.append(grid[i][j])
                
            # Add neighboring cells to the queue
            for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                if 0 <= i + di < n and 0 <= j + dj < m and grid[i + di][j + dj] != -1:
                    queue.append((i + di, j + dj, curr_len + 1))
    
    return path
```