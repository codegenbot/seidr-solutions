def sort_third(l: list):
    multiples = [x for x in l if x % 3 == 0]
    middle_index = len(multiples) // 2
    return [
        i if i % 3 != 0 else sorted([x for x in multiples])[middle_index] for i in l
    ]