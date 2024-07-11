```
def double_the_difference():
    lst = list(map(int, input().split()))
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

def check(func):
    print(func())

if __name__ == "__main__":
    check(double_the_difference)