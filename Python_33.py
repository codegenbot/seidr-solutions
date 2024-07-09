def sort_third(l: list):
    sorted_list = sorted(l, key=lambda x: str(x)[2])
    return sorted_list