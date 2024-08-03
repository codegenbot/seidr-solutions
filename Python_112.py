def reverse_delete(s, c):
    new_s = "".join(char for char in s if char not in c)
    return (new_s, new_s == new_s[::-1])