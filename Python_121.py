def solution(lst):
    return sum(
        i
        for i in lst
        if isinstance(i, str)
        and len(i.strip()) > 1
        and i[0].isupper()
        and i[-1].islower()
    )