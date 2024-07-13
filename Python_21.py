def rescale_to_unit(*inputs):
    inputs_str = ' '.join(map(str, inputs)).replace('(', '').replace(')', '').replace(',', ' ')
    inputs = list(map(lambda x: float(x.strip('[]')), inputs_str.replace('[', '').replace(']', '')))
    
    if not inputs:
        return []

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in inputs]

    print([str(x) for x in rescaled_numbers])