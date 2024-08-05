def check(func):
    test_list = [1, 2, 3]
    if func(test_list) == [2, 3, 4]:
        print("Function works correctly")
    else:
        print("Function does not work correctly")