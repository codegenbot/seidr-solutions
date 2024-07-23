```
def sorted_list_sum(lst):
    odd_length_items = [item for item in lst if len(item) % 2 != 0]
    even_length_items = [item for item in lst if len(item) % 2 == 0]
    return sum(len(i) for i in sorted(even_length_items))