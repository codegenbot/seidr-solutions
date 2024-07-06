```
def check(func):
    result = func()
    print("The double of the difference of squares of numbers is: ", 2 * (sum(i**2 for i in result) - ((max(result)) ** 2 + min(result)**2) // 2))
check(lambda: list(map(int, input().split())))