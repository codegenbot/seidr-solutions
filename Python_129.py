min_paths = [[1, 3], [7, 4], [5, 6]]
k = 2
sorted(
    [
        f"{path[1]}, {path[0]}"
        for _, path in sorted((sum(path), path) for path in min_paths[:k])
    ]
)