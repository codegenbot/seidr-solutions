```
def sorted_list_sum(lst):
    return [sum(len(word) for word in lst if len(word) % 2 == i) for i in range(2)]