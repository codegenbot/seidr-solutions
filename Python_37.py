def sort_even(l: list):
    odd = sorted([x for x in l if abs(x) % 2 != 0])
    even = [
        x
        for pair in zip(sorted([x for x in l if abs(x) % 2 == 0]), repeat(len(odd)))
        for x in pair
    ]
    return tuple(odd + even)