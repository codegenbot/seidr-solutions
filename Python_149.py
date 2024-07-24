```
def sorted_list_sum(lst):
    if all(i.isnumeric() for i in lst) and len(set(len(x) for x in lst)) == 1:
        return sum(sorted(map(int, [i * int('0' * (len(max(lst)) - len(i))) for i in lst])))
    else:
        num_strs = sorted([x for x in lst if x.isnumeric()])
        max_len = max(len(s) for s in num_strs)
        return [''.join(sorted(s)) for s in num_strs]