
def double_the_difference(num1, num2):
    return (num1 - num2) * 2

def check(func, lst):
    return sum(func(lst[i], lst[i+1]) for i in range(len(lst)-1) if i % 2 == 0)

lst = [1, 2, 3, 4, 5]

result = check(double_the_difference, lst)

print(result)