def check(func):
    sample_list = [1, 2, 3]
    result = func(sample_list)
    if result == [2, 3, 4]:
        print("Function passed the check.")
    else:
        print("Function failed the check.")

check(increment_list)