def rescale_to_unit(inputs: list) -> list:
    if not inputs:
        return []

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in inputs]

    return [str(x) for x in rescaled_numbers]