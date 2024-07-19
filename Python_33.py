def sort_third(l: list):
    multiples = [i for i in l if i % 3 == 0]
    sorted_multiples = sorted(multiples)
    length = len(sorted_multiples)
    middle_index = length // 2
    return [
        (
            i
            if i % 3 != 0
            else (
                sorted_multiples[middle_index]
                if length % 2 != 0
                else sorted_multiples[1]
            )
        )
        for i in l
    ]