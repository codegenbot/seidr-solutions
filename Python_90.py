def next_smallest(lst):
    if len(lst) < 2:
        return None
    smallest = lst[0]
    second_smallest = None
    for i in range(1, len(lst)):
        if lst[i] < smallest:
            second_smallest = smallest
            smallest = lst[i]
        elif lst[i] < second_smallest or second_smallest is None:
            second_smallest = lst[i]
    return second_smallest