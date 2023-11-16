
def add(lst):
    """Given a non-empty list of integers lst. add the even elements that are at odd indices..


    Examples:
        add([4, 2, 6, 7]) ==> 2 
    evens = [num for num in lst if num % 2 == 0]

    odds = [num for num in evens if lst.index(num) % 2 != 0]

    return sum(odds)
    """
