def leaders(input):
    result = [input[-1]]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= input[i + 1]:
            result.append(input[i])
    return result[::-1]