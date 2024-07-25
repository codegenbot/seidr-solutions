def shortest_paths(paths):
    min_path = min(paths, key=sum)
    return ", ".join([str(x) for x in min_path])

input_list = [(1, 2), (3, 4), (5, 6), (7, 8)]
output = shortest_paths(input_list)

print(output)