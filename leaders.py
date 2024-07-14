Here is the solution in Python:

def leaders(input_array):
    output = [input_array[-1]]
    for i in range(len(input_array) - 2, -1, -1):
        if input_array[i] >= input_array[i+1]:
            output.insert(0, input_array[i])
    return output