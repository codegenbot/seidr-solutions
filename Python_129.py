def min_length(paths):
    return min(sum(map(int, path)) for path in paths)

paths = input("""Enter a list of paths (e.g., 1-2,3-4): """)
paths = [path.strip().split('-') for path in paths.split(',')]
print(min_length(paths))