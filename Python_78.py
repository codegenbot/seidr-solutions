import re


def hex_key(num):
    count = 0
    for char in num:
        if re.match("[0-9A-Fa-f]", char):
            count += 1
    return count