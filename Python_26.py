def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    if not input_list:  
        return []  
    seen = set()
    result = [x for x in sorted(set(input_list)) if x not in seen and not seen.add(x) for x in set(input_list)]
    return result