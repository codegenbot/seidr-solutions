```
def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    sum_of_numbers = str(sum(numbers)) if numbers else '0'
    return sorted(set([s.replace(str(x), '') for s in lst] + [lst[0], lst[-1]]))