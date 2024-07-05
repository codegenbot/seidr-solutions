
def decode_cyclic(s):
    s = input("Enter a cyclic string to decode: ")
    if len(s) % 3 != 0:
        print("Invalid input. Please enter a cyclic string that is divisible by 3.")
        return
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded_groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)