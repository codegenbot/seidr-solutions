def sort_even(l: list) -> tuple:
    even_list = [x for x in l if isinstance(x, int) and x % 2 == 0]
    odd_list = [x for x in l if isinstance(x, int) and x % 2 != 0]

    result = sorted(even_list + odd_list)

    non_ints = [x for x in l if not isinstance(x, int)]
    result.extend(non_ints)

    return tuple(result)