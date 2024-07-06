```
def sorted_list_sum(lst):
    return str(sum(map(int, [word for word in lst if word.isdigit()])))