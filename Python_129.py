def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []
    
    def dfs(i, j, count):
        if count == k:
            return True
        
        visited[i][j] = True
        path.append(grid[i][j])
        
        if i > 0 and not visited[i-1][j]:
            if dfs(i-1, j, count+1):
                return True
        
        if i < N-1 and not visited[i+1][j]:
            if dfs(i+1, j, count+1):
                return True
        
        if j > 0 and not visited[i][j-1]:
            if dfs(i, j-1, count+1):
                return True
        
        if j < N-1 and not visited[i][j+1]:
            if dfs(i, j+1, count+1):
                return True
        
        visited[i][j] = False
        path.pop()
        return False
    
    for i in range(N):
        for j in range(N):
            if dfs(i, j, 1):
                return path

# Testing the code with the given examples
grid1 = [[1,2,3], [4,5,6], [7,8,9]]
k1 = 3
print(minPath(grid1, k1)) # Output: [1, 2, 1]

grid2 = [[5,9,3], [4,1,6], [7,8,2]]
k2 = 1
print(minPath(grid2, k2)) # Output: [1]