```
def sorted_list_sum(lst):
    numbers = [s for s in lst if s.isdigit()]
    return [''.join(sorted(s)) for s in set(''.join(numbers))]