def rescale_to_unit(input_str):
    if not input_str:
        return []

    if isinstance(input_str, list):
        inputs = input_str
    else:
        inputs = [float(input_str)]

    if not inputs:
        return []

    rescaled_numbers = []
    for sublist in inputs:
        if isinstance(sublist, list) and len(sublist) > 1:
            min_val = min(sublist)
            max_val = max(sublist)
            rescaled_sublist = [(x - min_val) / (max(abs(x - min_val), 1e-9)) for x in sublist]
            rescaled_numbers.append(rescaled_sublist)
        else:
            if isinstance(sublist, float):
                min_val = float('inf')
                max_val = -float('inf')
                rescaled_sublist = [(sublist - min_val) / (max(abs(sublist - min_val), 1e-9))]
                rescaled_numbers.append(rescaled_sublist)
            else:
                return [str(x) for x in rescaled_numbers]