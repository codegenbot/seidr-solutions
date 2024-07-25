```
def shortest_paths(min_paths):
    k = len(min_paths)
    sorted_paths = sorted(min_paths, key=sum)
    return ", ".join(["{}, {}".format(*path) for path in sorted_paths])

output = shortest_paths([x for x in input()[:-1].split(',')])
print(output)