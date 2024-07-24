```
def sorted_list_sum(input_data):
    return sum(len(str(num)) for num in sorted(input_data, key=len))