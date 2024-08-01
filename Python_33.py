def sort_third(l: list):
    not_three = [i for i in l if i % 3 != 0]
    three_remain_zero = [i for i in l if i % 3 == 0 and i % 9 != 0]
    three_remain_nonzero = [i for i in l if i % 3 == 0 and i % 9 == 0]
    return not_three + three_remain_nonzero + three_remain_zero