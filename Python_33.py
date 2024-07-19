def sort_third(l: list):
    multiples = sorted([i for i in l if i % 3 == 0])
    n = len(multiples)
    middle_idx = n // 2
    return [
        (
            i
            if i % 3 != 0
            else (multiples[middle_idx] if n % 2 == 0 else multiples[middle_idx])
        )
        for i in l
    ]