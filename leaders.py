def leaders(input):
    max_element = input[-1]
    result = [max_element]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_element:
            max_element = input[i]
            result.insert(0, max_element)
    return result