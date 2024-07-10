def sort_third(lst):
    numbers = sorted({x for x in lst if isinstance(x, (int, float))})
    others = [
        item for sublist in [i for i in lst if isinstance(i, list)] for item in sublist
    ]
    return [num for _ in range(numbers.count(num)) for num in numbers] + sorted(others)