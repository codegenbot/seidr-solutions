```
def sorted_list_sum(lst):
    sorted_ints = sorted(int(word) for word in lst if len(word) % 2 == 0)
    return sorted_ints
```