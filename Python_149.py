def sorted_list_sum(lst):
    numbers = [
        "".join(g).lstrip("0") or "0"
        for _, g in groupby(map(str, filter(str.isdigit, s)), str.isdigit)
        for s in lst
    ]
    numbers = sorted([int(x) for x in numbers])
    return "".join(str(i).zfill(len(max(map(str, numbers), key=len))) for i in numbers)