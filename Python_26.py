def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    if not input_list:  
        return []  
    seen = {}
    result = []
    for x in sorted(input_list):
        if seen.setdefault(x, 0) == 0:
            result.append(x)
    return result