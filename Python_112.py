def reverse_delete(s, c):
    new_s = "".join([x for x in s if x not in c])
    return (new_s, new_s == new_s[::-1])