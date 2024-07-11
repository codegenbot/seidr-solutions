```
def double_the_difference(lst):
    if len(lst) < 2:
        return "Invalid input. Please provide at least two integers."
    
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff


def check(func, args=""):
    print(func(args))


if __name__ == "__main__":
    check(double_the_difference, input().split())