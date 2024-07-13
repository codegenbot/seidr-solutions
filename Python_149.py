def sorted_list_sum(lst):
    numbers = [
        "".join(filter(str.isdigit, s)) for s in lst if any(c.isdigit() for c in s)
    ]
    numbers = [int(n) for n in numbers]
    return "".join(
        map(
            lambda x: str(x).zfill(len(max(map(str, numbers), key=len)))
            for _ in range(len(numbers))
        )
    )