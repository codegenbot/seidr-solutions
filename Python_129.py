def shortest_paths(input_list):
    k = len(input_list)
    sorted_paths = sorted(input_list, key=sum)
    return ", ".join(["{}, {}".format(*path) for path in sorted_paths])

input_list = [(1, 2), (3, 4), (5, 6), (7, 8)] 
output = shortest_paths(input_list)
print(output)