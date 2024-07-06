def decode_cyclic(s: str) -> str:
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    return "".join([group[0] + group[1:] for group in groups])


input_string = input("Enter a string to decode: ")
print(decode_cyclic(input_string))