def decode_cyclic(s: str):
    result = ''
    for group in s[:len(s) // 3 * 3].split(s[len(s) // 3 * 3 len(s)]):
        if len(group) == 3:
            result += group[1] + group[0]
        else:
            result += group
    return result + s[len(s) // 3 * 3:]