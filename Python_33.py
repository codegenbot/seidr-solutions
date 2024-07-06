def sort_third(l: list):
    zero_modulo_three = [x for x in l if x % 3 == 0]
    sorted_zero_modulo_three = sorted(zero_modulo_three) if zero_modulo_three else []
    return [
        i
        if i % 3 != 0
        else sorted_zero_modulo_three[-1] if sorted_zero_modulo_three else 0
        for i in l
    ]