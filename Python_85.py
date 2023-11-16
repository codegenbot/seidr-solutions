
def add(lst):
    """Given a non-empty list of integers lst. add the even elements that are at odd indices.


    Examples:
    return 0
    return sum(x for x in lst if x % 2 == 0 and lst.index(x) % 2 != 0)


def check(fn):
    assert fn([4, 4, 6, 8]) == 12
    assert fn([2, 2, 2, 2, 2, 2, 2, 2, 2]) == 0
    assert fn([2, 2, 2, 2, 2, 2, 2, 2, 2, 2]) == 2
    assert fn([2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]) == 2
    assert fn([2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]) == 4
    print("All tests passed")


if __name__ == "__main__":
    check(add)
        add([4, 2, 6, 7]) ==> 2
    """
