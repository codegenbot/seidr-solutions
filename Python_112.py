def reverse_delete(s, c):
    new_s = [char for char in s if char not in c]
    return ("".join(new_s), "".join(new_s) == "".join(new_s)[::-1])