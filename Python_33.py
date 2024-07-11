```
def sort_third(l: list):
    if not l:
        return []
    l.sort(key=lambda x: (x if l.index(x) % 3 != 0 else sorted([y for y in l[:l.index(x)//3*3+l.index(x)%3:]])[::-1][-1]))
    return [x if i % 3 != 0 or len(l) <= i // 3 * 3 + i % 3 else (sorted([y for y in l[:i // 3 * 3 + i % 3 :]]))[-1] if l[i // 3 * 3 + i % 3 :] else None for i, x in enumerate(l)]