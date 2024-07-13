def rescale_to_unit(*inputs):
    flat_inputs = [float(x) for sublist in inputs for x in str(sublist).replace('(', '').replace(')', '').replace(',', ' ').split()]
    
    if not flat_inputs:
        return []

    min_val = min(flat_inputs)
    max_val = max(flat_inputs)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in flat_inputs]

    print([str(x) for x in rescaled_numbers])