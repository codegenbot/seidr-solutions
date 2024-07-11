```
capacity = int(input())
n = int(input())
grid = [[int(x) for x in input().split()] for _ in range(n)]
column = [0]*n  
total_water = sum(min(row[i], row[i-1][j] if i > 0 else column[0], row[i+1][j] if i < n-1 else column[-1]) 
             for j, row in enumerate(grid)
) * (capacity or 1)
print(total_water)