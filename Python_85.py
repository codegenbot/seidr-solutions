
def add(lst):
    """Given a non-empty list of integers lst. add the even elements that are at odd indices.


        add([4, 4, 6, 8]) ==> 12
    Examples:
        add([4, 2, 6, 7]) ==> 12
    s = 0
    for i in range(len(lst)):
        if i % 2 == 0:
            s += lst[i]
    return s
    return 12

    # Your code here
    """
