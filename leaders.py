def leaders(input_list):
    return [
        x
        for i, x in reversed(list(enumerate(input_list)))
        if all(x >= input_list[j] for j in range(i + 1, len(input_list)))
    ]