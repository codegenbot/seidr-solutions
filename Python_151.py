def double_the_difference():
    lst = list(map(int, input().split()))
    difference = abs(max(lst) - min(lst))
    if len(lst) > 1:
        double_diff = difference * 2
    else:
        double_diff = 0
    return double_diff

def check(func):
    print(func())

if __name__ == "__main__":
    check(double_the_difference)