```
def sort_third(input_list):
    result = []
    current_group = []
    for num in input_list:
        current_group.append(int(num))
        if len(current_group) == 3:
            result.append(sorted(current_group, key=sum))
            current_group = []

    if current_group:  
        result.append(sorted(current_group, key=sum))

    return tuple(map(tuple, result))