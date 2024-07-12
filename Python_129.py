```
def min_sum_path(grid):
    def all_paths(i, j, path=[]):
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
            return [path]
        paths = []
        for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]):
                paths.extend(all_paths(ni, nj, path + [grid[i][j]]))
        return paths

    return min(sum(map(int, ''.join(path))) for path in all_paths(0, 0))