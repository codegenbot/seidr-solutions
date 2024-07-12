Here is the completed code:

def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    result = []
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) % 3 != 0:
                result.append('')  # add empty strings to maintain groups of three
            result[-1] = group[2] + group[1] + group[0]
            group = ''
    return "".join(result)