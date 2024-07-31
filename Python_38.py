Here is the completed code:

def decode_cyclic(s: str):
    """
    returns decoded string from encoded string by cycling groups of three characters.
    """
    result = ""
    group = ""
    for char in s:
        if len(group) < 3:
            group += char
        else:
            result += group[1] + group[0]
            group = char
    result += group[1:] + group[0]
    return result