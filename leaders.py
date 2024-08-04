def leaders(input):
    output = []
    max_r = input[-1]
    for i in range(len(input)-1, -1, -1):
        if input[i] >= max_r:
            max_r = input[i]
            output.append(max_r)
    return output[::-1]