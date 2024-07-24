```
def check(lst):
    for i in lst:
        if i % 2 == 0:
            print(f"{i} is even")
        else:
            print(f"{i} is odd")

by_length = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19]
check(by_length)