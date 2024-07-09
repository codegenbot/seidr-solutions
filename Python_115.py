def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = sum(sum(row) for row in grid)
    
    # Calculate how many times the tank can be filled
    num_times = -(-total_water // capacity)  # This does ceiling division
    
    return num_times