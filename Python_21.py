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
        input_list = [input_str.replace("[", "").replace("]", "") for input_str in inputs_str.split(" ") if inputs_str]
        inputs = [[list(map(float, sub_input.split())) for sub_input in input_list] for input_list in [inputs]]

        rescaled_numbers = []
        for lst in inputs:
            if lst:
                min_val = min(min(sublist) for sublist in lst)
                max_val = max(max(sublist) for sublist in lst)
                rescaled_lst = [
                    [(x - min_val) / max(abs(x - min_val), 1e-9) for x in sublist]
                    for sublist in lst
                ]
            else:
                rescaled_lst = []
            rescaled_numbers.append(rescaled_lst)
    else:
        inputs = list(map(float, inputs_str.split()))

    if not inputs:
        return []

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / max(abs(x - min_val), 1e-9) for x in inputs]

    print([str(x) for x in rescaled_numbers])