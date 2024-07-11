Here is the corrected code:

def sort_third(l):
    return [
        (
            x
            if i % 3 != 0 or len(l) <= i // 3 * 3 + i % 3
            else (sorted([y for y in l[:i // 3 * 3 + i % 3 :]]))[-1] if l[:i // 3 * 3 + i % 3 :] else None
        )
        for i, x in enumerate(l)
    ]