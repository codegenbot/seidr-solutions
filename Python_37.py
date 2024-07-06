def sort_even(l: list) -> tuple:
    pos_num_list = [x for x in l if isinstance(x, int) and x > 0]
    neg_num_list = [x for x in l if isinstance(x, int) and x < 0]

    non_ints = [x for x in l if not isinstance(x, int)]
    l = [x for x in l if isinstance(x, int)]  

    pos_evens = sorted([x for x in l if x % 2 == 0])
    neg_evens = sorted([-x for x in neg_num_list if -x % 2 == 0])

    pos_odds = sorted([x for x in l if x % 2 != 0])
    neg_odds = sorted([-x for x in neg_num_list if (-x) % 2 != 0])

    result = []
    
    result.extend(pos_evens)
    result.extend(neg_evens)
    result.extend(pos_odds)
    result.extend(neg_odds)

    result.extend(non_ints)

    return tuple(result)