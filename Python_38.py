```
def encode_cyclic(s: str, n: int):
    if len(s) <= n:
        return s
    groups = [s[i:i+n] for i in range(0, len(s), n)]
    groups = [(group[n-1:]+group[:n-1]) if len(group)==n else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str, n: int):
    if len(s) <= n:
        return s
    groups = [s[i:i+n] for i in range(0, len(s), n)]
    groups = [(groups[0]+groups[-1][-n+1:]) if len(group)==n else group for group in groups]
    return "".join(groups)