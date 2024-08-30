```
def leaders(input):
    output = [input[-1]]
    max_right = input[-1]

    for i in range(len(input) - 2, -1, -1):
        if input[i] < max_right:
            break
        elif input[i] >= max_right:
            max_right = input[i]
            output.insert(0, max_right)

    return output