Here is the completed code:

def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(row) for row in grid)
    remaining_water = total_water
    moves = 0
    
    while remaining_water > 0:
        moves += math.ceil(remaining_water / capacity)
        remaining_water %= capacity
    
    return moves