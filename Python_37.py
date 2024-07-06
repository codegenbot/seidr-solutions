```
def sort_even(l: list) -> tuple:
    pos_num_list = [x for x in l if isinstance(x, int) and x > 0]
    neg_num_list = [x for x in l if isinstance(x, int) and x < 0]

    result = []
    
    # Separate even numbers
    pos_evens = sorted([x for x in pos_num_list if x % 2 == 0])
    neg_evens = sorted([-x for x in neg_num_list if (-x) % 2 == 0])

    # Separate odd numbers
    pos_odds = sorted([x for x in pos_num_list if x % 2 != 0])
    neg_odds = sorted([-x for x in neg_num_list if (-x) % 2 != 0])

    result.extend(pos_evens)
    result.extend(neg_evens)
    result.extend(pos_odds)
    result.extend(neg_odds)

    # Sort remaining elements as they are (non-integers)
    non_ints = sorted([x for x in l if not isinstance(x, int)])

    # Add non-integers at the end
    result.extend(non_ints)

    return tuple(result)