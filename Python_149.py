```
def sorted_list_sum(lst):
    lst.sort(key=len)
    return str(sum([len(word) for i, word in enumerate(lst) if i % 2 == 1]))