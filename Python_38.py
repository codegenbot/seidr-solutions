def decode_cyclic(input_length, input_str):
    n = int(input_length)
    if n <= 0:
        return "Invalid input. Please enter a positive number for the length."

    groups = [
        (input_str[i - 1] + input_str[i - 2] + input_str[i])
        for i in range(n - 1, -1, -1)
    ]
    return "".join(groups)


print("Enter the length and the input string:")
input_length, input_str = input().strip().split(maxsplit=1)
result = decode_cyclic(input_length, input_str)
print(result)