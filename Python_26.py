```
def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    if not input_list:  
        return []  
    seen = set()
    unique_list = [x for x in input_list if not (x in seen or seen.add(x))]
    return sorted(unique_list)