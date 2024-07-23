def double_the_difference(lst):
    first_positive_int = next((i for i in lst if isinstance(i, int) and i > 0), None)
    return (first_positive_int - min(lst)) * 2 if first_positive_int else None