```python
def mostVisited(sum_paths):
    min_paths = sorted((sum(path), path) for path in sum_paths)
    return [path for _, path in min_paths[:1]] if min_paths else []