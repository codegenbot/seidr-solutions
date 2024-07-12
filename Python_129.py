def min_length(paths):
    return min(sum(map(int, path)) for path in paths)