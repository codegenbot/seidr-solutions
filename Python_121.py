```
def highest_rank(lst):
    from collections import Counter
    counter = Counter(lst)
    max_value = max(counter.values())
    max_keys = [key for key, value in counter.items() if value == max_value]
    return -1 if len(max_keys) > 1 else max_keys[0]