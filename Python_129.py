def solution(k, shortest_paths):
    return (
        min(
            [p for p in shortest_paths],
            default=grid[0] + [grid[0][0]] * (k - len(shortest_paths[min(shortest_paths)])),
        )
        if k > 0
        else []
    )