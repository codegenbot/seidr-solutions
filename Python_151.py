def check(lst, result):
    print("Input List:", lst)
    if isinstance(result, int) and result > 0:
        print("The difference is positive.")
    elif isinstance(result, int) and result < 0:
        print("The difference is negative.")
    else:
        print("It's zero.")