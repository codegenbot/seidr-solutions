def reverse_delete(s, c):
    result = [char for char in s if char not in c]
    return ("".join(result), result == "".join(reversed(result)))