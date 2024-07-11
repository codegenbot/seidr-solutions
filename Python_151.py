def double_the_difference():
    "This function takes input from user and returns the difference between maximum and minimum value of the list multiplied by 2."
    sep = input("Enter the separator: ")
    lst = list(map(int, input().split(sep)))
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

def check(func):
    print(func())

if __name__ == "__main__":
    check(double_the_difference)