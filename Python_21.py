```
def rescale_to_unit(input_str):
    if isinstance(input_str, list): 
        inputs = input_str
    else:
        inputs = list(map(float, input_str.split()))
    
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
            if not rescaled_numbers:  
                rescaled_numbers = [(sublist - min([sublist])) / max(abs(sublist - min([sublist])), 1e-9)]
            else:
                rescaled_numbers.append([(sublist - min([sublist])) / max(abs(sublist - min([sublist])), 1e-9)])
    return [str(x) for x in rescaled_numbers]