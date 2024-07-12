def check():
    result = None
    numbers = input("Enter some numbers separated by space: ").split()
    for num in numbers:
        if num.isdigit() and int(num) > 0:
            lst = list(map(int, [num]))
            result = double_the_difference(lst)
    return result

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

print(check())