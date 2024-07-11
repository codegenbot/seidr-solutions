def paint Canvas():
    for _ in range(10):
        for __ in range(20):
            if _ == 5:
                print('#', end=' ')
            else:
                print(' ', end=' ')
        print()