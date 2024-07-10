def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    result = []
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            result.append(group[1:] + group[0])
            group = ""
    return "".join(result + [group[1:] + group[0]] if group else [group])