```
def min_length(paths):
    return min(sum(map(int, path.split(','))) for path in paths)