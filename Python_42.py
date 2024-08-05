def check(func):
    test_list = [1, 2, 3]
    result = func(test_list)
    assert result == [2, 3, 4]
    print("Function passed the test successfully!")

check(increment_list)