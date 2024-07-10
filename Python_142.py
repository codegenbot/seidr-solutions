```
def sum_squares():
    n = int(input("Enter the number: "))
    return sum(i**2 for i in range(n))

def check(func):
    result = func()
    return result

result = check(sum_squares)
print(result)