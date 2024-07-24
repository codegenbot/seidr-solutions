```
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

grid = []
capacity = int(input("Enter the capacity: "))
for i in range(int(input("Enter the number of rows: "))):
    row = list(map(int, input("Enter the heights for row {}: ".format(i+1)).split()))
    grid.append(row)

print(max_fill(grid, capacity))