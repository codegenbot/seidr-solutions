```
return (
    min(
        [p for p in sorted(path_lengths.keys())],
        default=grid[0][0] * (k - min(shortest_paths)),
    ) if shortest_paths else []
)