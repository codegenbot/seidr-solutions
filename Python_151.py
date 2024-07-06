def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


if __name__ == "__main__":
    lst = [int(x) for x in input("Enter numbers: ").split()]
    print(double_the_difference(lst))