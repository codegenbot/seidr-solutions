```
def rescale_to_unit(*inputs):
    inputs_str = (
        " ".join(map(str, inputs))
        .replace("(", "")
        .replace(")", "")
        .replace(",", " ")
        .replace("[", "")
        .replace("]", "")
    )

    if not inputs:
        return []

    if isinstance(inputs[0], list):
        input_strs = [
            input_str.replace("[", "").replace("]", "")
            for input_str in inputs_str.split(" ")
        ]
        inputs = [list(map(float, input_str.split())) for input_str in input_strs]

        rescaled_numbers = [[(x - min(sublst)) / max(abs(x - min(sublst)), 1e-9) for x in sublst] 
                             if sublst else [] for sublst in inputs]
    else:
        inputs = list(map(float, inputs_str.split()))

    if not inputs:
        return []

    rescaled_numbers = []
    for sublist in inputs:
        if len(sublist) > 0:    
            min_val = min(sublist)
            max_val = max(sublist)
            rescaled_sublist = [(x - min_val) / max(abs(x - min_val), 1e-9) for x in sublist]
            rescaled_numbers.append(rescaled_sublist)
        else:
            rescaled_numbers.append([])
    print([str(x) for x in rescaled_numbers])