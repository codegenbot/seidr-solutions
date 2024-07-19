def sort_third(l: list):
    multiples = [x for x in l if x % 3 == 0]
    sorted_multiples = sorted(multiples)
    middle_index = len(sorted_multiples) // 2
    return [
        (
            i
            if i % 3 != 0
            else (
                sorted_multiples[middle_index]
                if len(sorted_multiples) % 2 != 0
                else min(sorted_multiples)
            )
        )
        for i in l
    ]