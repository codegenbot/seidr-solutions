```
def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    if not input_list:  
        return []  
    seen = set()
    output_list = []
    for x in input_list:
        if x not in seen:
            seen.add(x)
            output_list.append(x)
    return output_list