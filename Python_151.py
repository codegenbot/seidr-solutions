```
def double_the_difference():
    sep = input("Enter the separator: ")
    lst = list(map(int, input().split(sep)))
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return str(double_diff)

def check(func):
    print(func())

if __name__ == "__main__":
    check(double_the_difference)