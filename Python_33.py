def sort_third(lst: list):
    return [
        sorted(lst[i : i + 3]) if i % 3 == 0 else lst[i] for i in range(0, len(lst), 3)
    ]