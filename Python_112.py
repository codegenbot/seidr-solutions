def reverse_delete(s, c):
    res = ''.join([char for char in s if char not in c])
    return res, res == res[::-1]