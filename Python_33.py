def sort_third(l: list):
    mult_of_three = [i for i in l if i % 3 == 0]
    sorted_mult_of_three = sorted(mult_of_three)
    middle_index = len(sorted_mult_of_three) // 2
    return [
        (
            i
            if i % 3 != 0
            else (
                sorted_mult_of_three[middle_index]
                if len(sorted_mult_of_three) % 2 == 1
                else sorted_mult_of_three[middle_index + 1]
            )
        )
        for i in l
    ]