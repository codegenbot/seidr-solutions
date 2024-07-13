```
def rescale_to_unit(*inputs):
    inputs_str = ' '.join(map(str, inputs)).replace('(', '').replace(')', '').replace(',', ' ').replace('[', '').replace(']', '')
    
    if not inputs:
        return []

    if isinstance(inputs[0], list):
        inputs = [list(map(float, input_str.split())) for input_str in inputs_str.split(' ')]
        rescaled_numbers = []
        for lst in inputs:
            min_val = min(lst)
            max_val = max(lst)
            rescaled_lst = [(x - min_val) / max(abs(x - min_val), 1e-9) for x in lst]
            rescaled_numbers.append(rescaled_lst)
    else:
        inputs = list(map(float, inputs_str.split()))
        
    if not inputs:
        return []

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / max(abs(x - min_val), 1e-9) for x in inputs]

    print([str(x) for x in rescaled_numbers])