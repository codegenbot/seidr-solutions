```
def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] > 0:
                left_height = 0
                right_height = 0
                
                for k in range(i):
                    if grid[k][j] > 0:
                        left_height += 1
                    else:
                        break

                for k in range(len(grid) - i - 1):
                    if grid[i + k + 1][j] > 0:
                        right_height += 1
                    else:
                        break
                
                min_height = min(left_height, right_height)
                
                total_water += min_height * (left_height + right_height)
    return int(total_water)