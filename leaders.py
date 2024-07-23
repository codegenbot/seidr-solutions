def leaders(input):
    input = list(map(int, input.split()))
    output = []
    max_right = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] < max_right:
            break
        output.append(max_right)
        max_right = input[i]
    return " ".join(str(x) for x in reversed(output))