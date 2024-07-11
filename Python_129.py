```
def shortestPathLength(grid):
    m = len(grid)
    directions = [(0,1),(0,-1),(1,0),(-1,0)]
    queue = []
    visited = set()
    
    for i in range(m):
        for j in range(m):
            if grid[i][j] == 1:
                queue.append(((i,j),0))
                break
    while queue:
        (x,y), step = queue.pop(0)
        if x==0 and y==m-1:
            return step
        for dx,dy in directions:
            nx,ny = x+dx,y+dy
            if 0<=nx<m and 0<=ny<m and (nx,ny) not in visited:
                if (nx,ny) == (0,m-1):
                    return step+1
                queue.append(((nx,ny),step+1))
                visited.add((nx,ny))