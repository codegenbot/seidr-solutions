def sort_third(lst: list) -> list:
    return sorted([(int(str(i)[2:]) if len(str(i)) >= 3 else -1, i) for i in lst])