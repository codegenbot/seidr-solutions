def rescale_to_unit(*args):
    if args:
        inputs = list(map(float, str(args[0]).replace('[', '').replace(']', '').split()))
    else:
        inputs = []
        
    if not inputs:
        return []

    min_val = min(inputs)
    max_val = max(inputs)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in inputs]

    print([str(x) for x in rescaled_numbers])