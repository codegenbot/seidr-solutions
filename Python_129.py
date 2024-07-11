```
def minPath(k):
    k = int(input("Enter the size of the grid: "))
    m = [[int(input(f"Enter value at row {i} column {j}: ")) for j in range(k)] for i in range(k)]

    def dfs(i, j, path_sum):
        if i == k-1 and j == k-1:
            return path_sum + m[i][j]
        min_path_sum = float('inf')
        if i < k-1:
            min_path_sum = min(min_path_sum, dfs(i+1, j, path_sum+m[i][j]))
        if j < k-1:
            min_path_sum = min(min_path_sum, dfs(i, j+1, path_sum+m[i][j]))
        return min_path_sum

    return dfs(0, 0, 0)

print(minPath(2))