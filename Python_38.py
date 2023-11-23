def decode_cyclic():
    n = int(input())
    input_str = input().strip()

    groups = [input_str[i : i + 3] for i in range(0, len(input_str), 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)