import re


def cycpattern_check(a, b):
    return bool(re.search(b, a))