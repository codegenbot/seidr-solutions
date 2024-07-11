def double_the_first_diff(lst):
    first = min(lst)
    for num in lst:
        if num > first:
            second = num
            break
    return (second - first) ** 2