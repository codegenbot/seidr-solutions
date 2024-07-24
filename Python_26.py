def remove_duplicates(input_list=None):
    if input_list is None:
        values = input("Enter numbers separated by space: ").strip()
        input_list = [int(value) for value in values.split()]
    if not input_list:  
        return []  
    seen = {}
    result = []
    for num in input_list:
        if num not in seen:
            seen[num] = True
            result.append(num)
    return result