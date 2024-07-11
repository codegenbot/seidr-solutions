def sort_even(l: list):
    odd_numbers = [x for x in l if abs(x) % 2 != 0]
    sorted_evens = [
        (n if n >= 0 else -n, abs(n))
        for n in sorted([abs(x) for x in l if abs(x) % 2 == 0])
    ]
    evens = [n[1] if n[0] >= 0 else -n[1] for n in sorted_evens]
    return tuple(evens + odd_numbers)