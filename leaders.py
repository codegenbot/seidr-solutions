```
def leaders(input):
    output = [input[-1]]  
    max_right = input[-1]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max_right:
            output.append(input[i])
            max_right = input[i]
    return output[::-1]