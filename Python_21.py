def rescale_to_unit(*inputs):
    inputs_str = ' '.join(map(str, inputs)).replace('(', '').replace(')', '').replace(',', ' ')
    inputs = list(map(float, inputs_str.split()))
    
    if not inputs:
        return []

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in inputs]

    print([str(x) for x in rescaled_numbers])