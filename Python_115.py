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

It's important to note that the code is not complete and it's missing an import statement, the `import math` statement should be added at the beginning of the code in order to use the `math.ceil()` function without any issues.