Here is the completed code:

def max_fill(grid, capacity):
    water = 0
    for row in grid:
        water += sum(row)
    return math.ceil(water / capacity)