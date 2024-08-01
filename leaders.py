def leaders(input_list):
    return [
        x
        for i, x in enumerate(reversed(input_list))
        if all(x >= y for y in input_list[i + 1 :])
    ]