def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace(",", ".").replace(".", ",").strip() > str(b): a
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace(",", ".").replace(".", ",").strip() > str(a): b
    else:
        return max(a, b) if a != b else None