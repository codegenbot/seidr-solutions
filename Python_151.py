def double_the_difference(lst):
    odd_nums = [num for num in lst if num % 2 != 0]
    return sum([i**2 for i in odd_nums]) * 2


def check(lst):
    result = sum([i for i in lst if i % 2 == 0]) * 2
    if result == double_the_difference(lst):
        print("Yes, it equals two.")
    else:
        print("No, it doesn't equal two.")


check([1, 2, 3, 4, 5])