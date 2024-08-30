def leaders(input):
    output = []
    max_right = input[-1]
    output.append(max_right)

    for num in input:
        if num >= max_right:
            output.insert(0, num)
            max_right = num

    return output