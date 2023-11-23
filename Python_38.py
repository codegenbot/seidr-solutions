def decode_cyclic(input_str):
    input_str = input_str.strip()
    groups = [
        (input_str[(i - 1) % len(input_str)] + input_str[(i - 2) % len(input_str)] + input_str[i])
        for i in range(len(input_str))
    ]
    return "".join(groups)


input_str = input()
input_str = input_str.strip()
result = decode_cyclic(input_str)
print(result)