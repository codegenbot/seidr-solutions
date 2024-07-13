def rescale_to_unit(lst):
    if not lst:
        return []

    min_val = min(lst)
    max_val = max(lst)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in lst]

    print([str(x) for x in rescaled_numbers])