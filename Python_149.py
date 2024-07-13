def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    return sorted(list(set(''.join(map(str,sorted(enumerate(numbers), key=lambda x: (len(str(x[1])), x[0]))) ))))