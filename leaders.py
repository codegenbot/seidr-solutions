```
def leaders(input):
    output = []
    max_right = input[0]
    for num in input:
        if num >= max_right:
            output.append(num)
            max_right = num
    return output[::-1]