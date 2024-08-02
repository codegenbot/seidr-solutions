```
def sorted_list_sum(lst):
    return [word for word in sorted(set([w for w in lst if len(w) % 2 == 0]), key=lambda x: (len(x), x)) if len(word) > 0]