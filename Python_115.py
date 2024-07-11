```
row_values = list(map(int, input().split()))
column_values = list(map(int, input().split()))
capacity = int(input())
n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]
column = [0] * n
for i, row in enumerate(grid):
    for j in range(len(row)):
        left_max = max(column[0], *(row[k][j] for k in range(i)))
        right_max = max(column[-1], *(row[k][j] for k in range(i + 1, n)))
        column[i] = min(left_max, right_max)
total_water = sum(min(row[j], column[0]) - max(column[i-1] if i else 0, column[i])) 
for j, row in enumerate(grid))
print(total_water)