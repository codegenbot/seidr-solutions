```
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))
grid = [[int(x) for x in input(f"Enter heights for each column (space separated): ").split()] * cols]
capacity = int(input("Enter the capacity: "))

def max_fill(grid, capacity):
    total_water = 0
    left = 0
    right = len(grid[0]) - 1
    for i in range(len(grid)):
        min_height_left = grid[i][left]
        min_height_right = grid[i][right]
        while left < right and min_height_left <= min_height_right:
            if min_height_left < min_height_right:
                water_level = min(min_height_left, capacity)
                total_water += water_level
                left += 1
            else:
                water_level = min(min_height_right, capacity)
                total_water += water_level
                right -= 1
            min_height_left = grid[i][left]
            min_height_right = grid[i][right]
    return total_water

print(max_fill(grid, capacity))