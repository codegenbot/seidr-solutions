import itertools

def sort_third(lst: list):
    sorted_lst = sorted(
        [(lst[i], lst[i+1], lst[i+2]) for i in range(0, len(lst)-2, 3)],
        key=lambda x: max(x) if len(x) == 3 else float('-inf')
    )
    return list(itertools.chain.from_iterable(sorted_lst))