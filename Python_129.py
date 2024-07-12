```
def min_length(all_paths):
    return min(sum(map(int, path.split('/'))) for path in all_paths)