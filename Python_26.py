```
def remove_duplicates(input_list=None):
    from collections import OrderedDict
    if input_list is None:
        values = ' '.join(input("Enter numbers separated by space: ").split())
        input_list = [int(value) for value in values.split()]
    if not input_list:  
        return []  
    result = []
    for num in set(input_list):
        count = 0
        for n in input_list:
            if n == num:
                count += 1
        if count > 1:
            result.append((num, count))
        else:
            result.append(num)
    return result