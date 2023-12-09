Solve the following code contest problem: Python/115. Problem description: Complete the following code given the task description and function signature. Currently, the code is:
```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += 1
    return math.ceil(water / capacity)
```
Modify the code as The issue with the code is that it uses the `math` module but does not import it. To fix this, add the following line at the beginning of the file: `import math`. This will allow you to use functions from the `math` module in your code..