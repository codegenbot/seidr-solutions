```
def double_the_difference():
    a, b = map(int, input().split())
    diff = abs(a - b)
    double_diff = diff * 2
    return double_diff

def check(func):
    print(func())

check(double_the_difference)