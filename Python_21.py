def rescale_to_unit(inputs: list) -> str:
    if not inputs:
        return "No input provided"

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in inputs]

    return ", ".join(str(round(num, 2)) for num in rescaled_numbers)