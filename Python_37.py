def sort_even(l: list) -> tuple:
    result = []
    
    # Separate numbers from other elements
    num_list = [x for x in l if isinstance(x, int)]
    
    # Separate even numbers based on sign
    neg_evens = sorted([-x for x in num_list if 0 > x and x % 2 == 0])
    pos_evens = sorted([x for x in num_list if 0 < x and x % 2 == 0])

    # Separate odd numbers
    odds = sorted([x for x in num_list if (x < 0 and x % 2 != 0) or (x > 0 and x % 2 != 0)])

    # Sort remaining elements as they are (non-integers)
    non_ints = sorted([x for x in l if not isinstance(x, int)])

    # Combine all parts
    result.extend([-x for x in neg_evens])
    result.extend(pos_evens)
    result.extend(odds)
    
    # Add non-integers at the end
    result.extend(non_ints)

    return tuple(result)