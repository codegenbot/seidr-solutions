def sort_even(l: list) -> tuple:
    even_numbers = [x for x in l if isinstance(x, int) and x % 2 == 0]
    odd_numbers = [x for x in l if isinstance(x, int) and x % 2 != 0]

    even_numbers.sort()
    odd_numbers.sort()

    result = list(even_numbers)
    i = 0
    for x in l:
        if isinstance(x, int):
            if x % 2 == 0:
                result.append(x)
            else:
                odd_numbers.insert(0, x) 
        else:
            result.append(x)

    return tuple(result)