def sort_third(l: list):
    multiples = [x for x in l if x % 3 == 0]
    sorted_multiples = sorted(multiples)
    n = len(sorted_multiples)
    return [
        (
            i
            if i % 3 != 0
            else (
                sorted_multiples[n // 2] if n % 2 != 0 else sorted_multiples[n // 2 - 1]
            )
        )
        for i in l
    ]