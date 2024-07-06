import transliterate

def digitSum(s):
    return sum(int(c) for c in s.translate(str.maketrans('', '', 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ')) if c.isdigit())