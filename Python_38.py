def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def main():
    operation = input("Enter 'encode' or 'decode': ")
    s = input("Enter the string: ")

    if operation == 'encode':
        result = encode_cyclic(s)
    elif operation == 'decode':
        result = decode_cyclic(s)
    
    print(result)

if __name__ == "__main__":
    main()