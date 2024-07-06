def encrypt(s):
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza")
    return s.translate(table)


# test case 1:
encrypt("hello")  # 'ifmmp'

# test case 2:
encrypt("world")  # 'xpsme'