```Python
def intersperse(a, b):
    if not a:
        return [b]
    result = [a[0], b]
    for item in a[1:]:
        result.extend([item, b])
    return result