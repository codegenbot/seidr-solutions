def rescale_to_unit(input_str):
    if not input_str:
        return []

    if isinstance(input_str, list): 
        inputs = input_str
    else:
        inputs = list(map(float, re.split('[\s,\.]+', input_str)))
    
    if not inputs:
        return []

    rescaled_numbers = []
    for sublist in inputs:
        if isinstance(sublist, list):  
            min_val = min(sublist)
            max_val = max(sublist)
            rescaled_sublist = [(x - min_val) / (max(abs(x - min_val), 1e-9)) for x in sublist]
            rescaled_numbers.append(rescaled_sublist)
        else:  
            rescaled_number = (sublist - min(inputs)) / max(abs(sublist - min(inputs)), 1e-9)
            rescaled_numbers.append([rescaled_number])
    return [str(x) for x in rescaled_numbers]