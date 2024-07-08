def sort_third(lst: list) -> list:
    third_elements = sorted([x for x in lst if len(str(x)) % 3 == 0], reverse=True)
    rest_elements = [x for i, x in enumerate(lst) if i % 3 != 0]
    return [x if i % 3 != 0 else third_elements.pop() for i, x in enumerate(rest_elements)]