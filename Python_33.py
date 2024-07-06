```
def sort_third(input_list):
    result = []
    for i in range(0, len(input_list)):
        if i % 3 == 2:
            group = tuple(sorted([int(x) for x in input_list[i-2:i+1]]))
        else:
            group = tuple(sorted([int(x)])) 
        result.append(group)

    return tuple(sorted(map(tuple, result)))