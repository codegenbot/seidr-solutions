def decode_cyclic(input_length, input_str):
    groups = [
        (input_str[(i - 1) % len(input_str)] + input_str[(i - 2) % len(input_str)] + input_str[i])
        for i in range(len(input_str))
    ]
    return "".join(groups)


input_length = 38
input_str = "Python/38"
input_length = int(input_length)
result = decode_cyclic(input_length, input_str)
print(result)