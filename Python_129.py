def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    path = []
    visited = set()
    
    # Helper function to check if cell is valid
    def isValid(x, y):
        return x >= 0 and x < n and y >= 0 and y < n
    
    # Helper function to get neighbors of a cell
    def getNeighbors(x, y):
        neighbors = []
        if isValid(x-1, y):
            neighbors.append((x-1, y))
        if isValid(x+1, y):
            neighbors.append((x+1, y))
        if isValid(x, y-1):
            neighbors.append((x, y-1))
        if isValid(x, y+1):
            neighbors.append((x, y+1))
        return neighbors
    
    # DFS function to find minimum path
    def dfs(x, y, count):
        # Base case: if count reaches k, return path
        if count == k:
            return path
        
        # Add current cell to path
        path.append(grid[x][y])
        visited.add((x, y))
        
        # Get neighbors of current cell
        neighbors = getNeighbors(x, y)
        
        # Sort neighbors based on grid values
        neighbors.sort(key=lambda cell: grid[cell[0]][cell[1]])
        
        # Explore neighbors
        for neighbor in neighbors:
            nx, ny = neighbor
            if (nx, ny) not in visited:
                result = dfs(nx, ny, count+1)
                if result:
                    return result
        
        # Backtrack: remove current cell from path
        path.pop()
        visited.remove((x, y))
        
        return None
    
    # Start DFS from each cell in grid
    for i in range(n):
        for j in range(n):
            result = dfs(i, j, 1)
            if result:
                return result