```
def shortest_paths(paths):
    k = len(paths)
    sorted_paths = sorted(paths, key=sum)
    return ", ".join(["{}, {}".format(*path) for path in sorted_paths])

input_list = [(1,2), (3,4), (5,6), (7,8)] 
output = shortest_paths(input_list)
print(output)