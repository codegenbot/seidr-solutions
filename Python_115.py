```
def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    if total_water % capacity != 0:
        return -1
    total_containers = total_water // capacity
    
    filled_containers = 0
    container_volume = 0
    for i in range(n):
        for j in range(m):
            while grid[i][j] > capacity:
                grid[i][j] -= capacity
                filled_containers += 1
                container_volume += capacity
            
            container_volume += min(grid[i][j], capacity)
            if container_volume >= capacity:
                filled_containers += 1
                container_volume = 0
            
    return filled_containers