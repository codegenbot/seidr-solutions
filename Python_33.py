```
def sort_third(input_list):
    result = [sorted(input_list[k:k+3]) for k in range(0, len(input_list), 3)]
    remaining = input_list[len(input_list)//3*3:]
    if remaining:
        result.append(sorted(remaining))
    return tuple(result)