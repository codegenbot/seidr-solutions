```
def sort_third(l: list):
    result = []
    current_group = []
    for x in l:
        current_group.append(x)
        if len(current_group) == 3:
            result.extend(sorted(current_group))
            current_group = []
    if current_group:
        result.extend(sorted(current_group))
    return tuple(result)