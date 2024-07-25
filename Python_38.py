def decode_cyclic(s: str):
    if len(s.strip()) < 3 or len(s.strip()) % 3 != 0:
        return "Please enter a string with a length multiple of 3 and at least 3 characters."

    groups = [
        (s[i - 1] + s[i - 3 : i - 1]) if i % 3 else s[i - 3 : i]
        for i in range(3, len(s) + 1, 3)
    ]
    return "".join(groups)


input_str = raw_input("Enter a string: ").rstrip()
result = decode_cyclic(input_str)
print(result)