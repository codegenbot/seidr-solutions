def shortest_paths(min_paths):
    k = len(min_paths)
    return ", ".join(["{}, {}".format(*path) for path in sorted(min_paths[:k], key=sum)])

input_list = [(1, 2), (3, 4), (5, 6), (7, 8)] 
output = shortest_paths(input_list)
print(output)