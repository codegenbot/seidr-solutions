def rescale_to_unit(input_str):
    if isinstance(input_str, list): 
        inputs = input_str
    else:
        inputs = list(map(float, input_str.split()))
    
    if not inputs:
        return []

    if isinstance(inputs[0], list):
        inputs = [
            list(map(float, input_str.split())) for input_str in input_str.split(" ")
        ]

        rescaled_numbers = [
            (
                [(x - min(sublst)) / max(abs(x - min(sublst)), 1e-9) for x in sublst]
                if sublst
                else []
            )
            for sublst in inputs
        ]
    else:
        inputs = list(
            map(
                float,
                " ".join(map(str, inputs))
                .replace("(", "")
                .replace(")", "")
                .replace(",", " ")
                .replace("[", "")
                .replace("]", "")
                .split(),
            )
        )

    if not inputs:
        return []

    rescaled_numbers = []
    for sublist in inputs:
        if isinstance(sublist, list):  # Check if the element is a list
            if len(sublist) > 0:  # Check the length of the sublist
                min_val = min(sublist)
                max_val = max(sublist)
                rescaled_sublist = [(x - min_val) / max(abs(x - min_val), 1e-9) for x in sublist]
                rescaled_numbers.append(rescaled_sublist)
            else:
                rescaled_numbers.append([])
        else:  # If the element is not a list, consider it as a single number
            if not rescaled_numbers:  # Check if rescaled_numbers is empty
                rescaled_numbers = [(sublist - min([sublist])) / max(abs(sublist - min([sublist])), 1e-9)]
            else:
                rescaled_numbers.append([(sublist - min([sublist])) / max(abs(sublist - min([sublist])), 1e-9)])
    return [str(x) for x in rescaled_numbers]