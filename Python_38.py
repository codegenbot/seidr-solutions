import sys


def decode_cyclic(s):
    s = sys.stdin.readline().rstrip()
    if len(s) % 3 != 0:
        s = s.rjust(len(s) + (3 - len(s) % 3), " ")
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded_groups = [
        (group[1:] + group[0]) if len(group) == 3 else group for group in groups
    ]
    return "".join(decoded_groups)