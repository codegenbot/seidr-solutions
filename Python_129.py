```
k = 3
min_paths = [[1, 2], [2, 3], [3, 4], [4, 5]]

result = sorted([f"{path[1]}, {path[0]}" for _, path in sorted((sum(path), path) for path in min_paths[:k])])
print(result)