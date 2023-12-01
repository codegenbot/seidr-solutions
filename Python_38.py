import sys

def decode_cyclic() -> str:
    s = sys.stdin.readline().strip()
    groups = [s[i * 3 : (i * 3) + 3] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)