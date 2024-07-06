def sort_even(l: list) -> tuple:
    even_numbers = []
    odd_numbers = []

    for x in l:
        if isinstance(x, int):
            if x % 2 == 0:
                even_numbers.append(x)
            else:
                odd_numbers.append(x)
        elif x == 0:
            even_numbers.append(0)

    return (
        tuple(sorted(even_numbers + [i for i in even_numbers if i < 0])),
        tuple(sorted([i for i in odd_numbers if i > 0])),
    )