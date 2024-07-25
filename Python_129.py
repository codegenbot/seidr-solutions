def shortest_paths(min_paths):
    k = len(min_paths)
    return ", ".join(
        ["{}, {}".format(*path) for path in sorted(min_paths[:k], key=sum)]
    )