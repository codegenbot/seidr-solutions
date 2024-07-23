```
def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted((l[:i] if i < len(l) else l))[0]
        for i, x in enumerate(l)
    ]