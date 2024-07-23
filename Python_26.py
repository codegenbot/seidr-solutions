```
def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    if not input_list:  
        return []  
    return sorted([i for i in set(input_list) if (input_list.count(i) == 1)])