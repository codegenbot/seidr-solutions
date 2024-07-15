def sort_third(l: list):
    return [sorted(l[i:i+3], key=lambda x: str(x)[2]) for i in range(0, len(l), 3)]