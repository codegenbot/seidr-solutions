def leaders(input):
    output = [input[-1]] 
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= output[0]:
            output.insert(0, input[i])

    return output