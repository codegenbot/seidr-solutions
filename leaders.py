Here is the Python solution for the problem:

def leaders(input):
    result = [input[-1]]
    max_right = input[-1]
    
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max_right:
            result.append(input[i])
            max_right = input[i]
    
    return list(reversed(result))