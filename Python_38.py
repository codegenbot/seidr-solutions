import sys

def decode_cyclic():
    s = ''
    for line in sys.stdin:
        line = line.strip()
        if not line:
            break
        s += line
    groups = [s[i:i + 3] for i in range(0, len(s), 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return ''.join(groups)