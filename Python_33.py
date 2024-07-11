```Python
def sort_third(l: list):
    third_elements = [x for _, i in enumerate(l) if (i-0)%3==0]
    return sorted(third_elements)