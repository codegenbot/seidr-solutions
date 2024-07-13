def sorted_list_sum(lst):
    numbers = [int(''.join(filter(str.isdigit, s))) for s in lst if any(c.isdigit() for c in s)]
    return ['{0}{1}'.format(sorted([s for s in set(s) for s in lst if ''.join(filter(str.isdigit, s)) == i])[0].zfill(len(i)), len(list(x for x in lst if ''.join(filter(str.isdigit, x)) == i))) for i in sorted(set(numbers))]