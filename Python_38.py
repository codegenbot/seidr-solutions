def decode_cyclic(prompt_message):
    s = input(prompt_message)
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

decode_cyclic("Enter the string: ")