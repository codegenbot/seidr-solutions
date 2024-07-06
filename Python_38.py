def decode_cyclic():
    try:
        s = input("Enter cyclically encoded message: ")
        groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
        decoded_groups = [(group[-1:] + group[:-1]) if len(group) == 3 else group for group in groups]
        return "".join(decoded_groups)
    except (ValueError, IndexError):
        print("Invalid input")
        return None