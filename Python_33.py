def sort_third(lst: list) -> tuple:
    return tuple(sorted((i for i in lst), key=lambda x: int(str(x)[0])))