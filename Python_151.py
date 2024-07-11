def double_the_difference(lst):
    result = sum(i ** 2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    difference = abs(sum(lst) - len(lst)) / len(lst)
    return (result + difference) * 2