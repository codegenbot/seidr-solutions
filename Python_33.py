def sort_and_handle_remainder(lst: list) -> list:
    lst.sort()
    remainders = [x for x in lst if x % 3 != 0]
    remainder_len = len(remainders)
    if remainder_len % 3 == 1:
        return [lst[-1]]
    elif remainder_len % 3 == 2:
        return [lst[-2], lst[-1]]
    else:
        return remainders