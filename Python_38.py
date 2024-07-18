def decode_cyclic():
    groups = [input("Enter a list of strings: ")[i:i+3] for i in range(0, len(input("Enter a list of strings: ")), 3)]
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)