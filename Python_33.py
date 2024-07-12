def sort_third(lst: list[int]) -> list[int]:
    try:
        return sorted(lst, key=lambda x: x)
    except TypeError:
        return []

print(sort_third([[5, 6, 3], [4, 8, 9], [2, 1, 7]]))