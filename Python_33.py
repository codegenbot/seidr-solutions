def sort_third(l: list):
    chunks = [
        sorted(l[i : i + 3]) if i + 3 <= len(l) else l[i:] for i in range(0, len(l), 3)
    ]
    return [item for sublist in chunks for item in sublist]