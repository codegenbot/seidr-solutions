def check(func):
    for i in range(5):
        assert func([i]) == [i + 1]

check(increment_list)