def reverse_delete(s, c):
    res = ""
    for char in s:
        if char not in c:
            res += char
    return res, res == res[::-1]