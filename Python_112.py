def reverse_delete(s, c):
    new_s = [i for i in s if i not in c]
    return ("".join(new_s), new_s == new_s[::-1])