def sort_third(l: list):
    multiples_of_3 = [x for x in l if x % 3 == 0]
    return sorted(
        [i if i % 3 != 0 else next((m for m in set(multiples_of_3)), None) for i in l]
    )