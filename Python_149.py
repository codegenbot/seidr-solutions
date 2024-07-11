```
def sorted_list_sum(lst):
    return sum(len(word) for word in sorted(set(lst)) if len(str(word)) % 2 == 0)