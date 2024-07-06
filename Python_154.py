import re


def cycpattern_check(a, b):
    pattern = r"(?=.*({}))".format(b)
    return bool(re.search(pattern, a))