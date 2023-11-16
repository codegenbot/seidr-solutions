

def check(fib):
    assert fib(1) == 1
    assert fib(10) == 55
    assert fib(12) == 144
    assert fib(20) == 6765
    print('OK!')


if __name__ == '__main__':
    check(fib)
