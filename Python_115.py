Solve the following code contest problem: Python/115. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
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
Modify the code as The issue with the given code is that it uses the `math` module, but does not import it. To fix this, you can add an import statement at the top of the file: `import math`. This will allow the code to use the functions and constants defined in the `math` module..
You must only return correct code. Remove any triple quotes, language name or explanations.