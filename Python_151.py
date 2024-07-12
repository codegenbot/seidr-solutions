def double_the_difference(lst):
    odd_nums = [num for num in lst if num % 2 != 0]
    return sum([i**2 for i in odd_nums]) * 2

def check(lst):
    result = double_the_difference(lst)
    if result == 2 * sum(num for num in lst if num % 2 == 0):
        print("Yes, it equals two.")
    else:
        print("No, it doesn't equal two.")