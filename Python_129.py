def shortest_paths(paths):
    return ", ".join(["{}, {}".format(*path) for path in sorted(paths, key=sum)])