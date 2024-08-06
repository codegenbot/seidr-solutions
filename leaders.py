def leaders(input_list):
    n = len(input_list)
    result = [input_list[n - 1]]

    for i in range(n - 2, -1, -1):
        if input_list[i] >= input_list[n - 1]:
            result.append(input_list[i])
            n = i
    return list(reversed(result))