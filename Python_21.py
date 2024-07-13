def rescale_to_unit(*inputs):
    inputs = list(map(float, str(inputs).replace('(', '').replace(')', '').replace(',', ' ').split()))
    
    if not inputs:
        return []

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in inputs]

    print([str(x) for x in rescaled_numbers])