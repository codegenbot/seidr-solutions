def decode_cyclic(s: str):
    if not s.isupper():
        return "Input should contain only uppercase letters"

    groups = [s[i:] + s[:i] for i in range(1, len(s)+1, 3)]
    return "".join(groups)


input_string = input("Enter a string: ").strip()
if len(input_string) >= 3:
    result = decode_cyclic(input_string)
    print(result)
else:
    print("Input should have a length of at least 3. Please try again.")