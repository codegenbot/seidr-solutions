def min_length(paths):
    return min(sum(map(int, [int(x) for x in path])) for path in paths)

paths = input("""Enter a list of paths (e.g., 1-2,3-4): """)
paths = [[int(x) for x in path.strip().split('-')] for path in paths.split(',')]
print(min_length(paths))