def sort_even(l: list) -> tuple:
    numbers = sorted([x for x in l if isinstance(x, int)])
    return (*[n for n in numbers if n % 2 == 0], * [n for n in numbers if n % 2 != 0])