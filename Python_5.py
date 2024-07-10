```
def intersperse(a, b):
    return [b] + sum([[i] if i == b else [i] for i in ([b]+list(a)+[b])], [b]) + [b]