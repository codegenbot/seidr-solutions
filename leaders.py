def leaders(input_list):
    n = len(input_list)
    return [
        input_list[i]
        for i in range(n - 1, -1, -1)
        if all(x <= input_list[i] for x in input_list[i + 1 :])
    ]