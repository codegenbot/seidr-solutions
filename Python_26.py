```
def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    if not input_list:  
        return []  
    seen = {}
    return [x for x in sorted(input_list) if seen.get(x) is None:]