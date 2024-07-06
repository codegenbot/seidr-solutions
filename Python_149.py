```
def sorted_list_sum(lst):
    evens = [word for word in lst if len(word) % 2 == 0]
    odd = [word for word in lst if len(word) % 2 != 0]
    return [word for word in sorted(evens, key=lambda x: (len(x), x)) + odd]