def decode_cyclic():
    s = input('Enter the input string: ')
    groups = [s[i*3:(i*3) + 3] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)