def double_the_difference():
    "Return double the difference of all unique integers input by user separated by a given separator."
    sep = input("Enter the separator: ")
    lst = list(map(int, input().split(sep)))
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff


def check(func):
    print(func())


if __name__ == "__main__":
    check(double_the_difference)