def check(lst, result):
    if abs(result - (double_the_difference(lst) * 2)) > 0.00001:
        print("Wrong Answer")
    elif isinstance(result, bool):
        print("Run-Time Error")
    else:
        print("Correct")