```
def shortest_paths(paths):
    return ", ".join(["{}, {}".format(*path) for path in sorted(paths)])


input_list = [(1, 2), (3, 4), (5, 6), (7, 8)]
output = shortest_paths(input_list)
print(output)