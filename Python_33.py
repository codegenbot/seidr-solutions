def sort_third(l: list):
    multiples_of_three = [x for x in l if x % 3 == 0]
    return [
        (
            i
            if i % 3 != 0
            else (sorted(multiples_of_three)[0] if multiples_of_three else -1)
        )
        for i in l
    ]