from typing import List

def shortestPaths(grid: List[List[int]], k: int) -> list:
    result = []
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == k:
                result.append((i, j))
    return result