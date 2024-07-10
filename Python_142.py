```python
def check(func):
    return func()

def sum_squares():
    num_list = list(map(int, input("Enter space-separated integers: ").split()))
    return sum([i**2 for i in num_list])

result = check(sum_squares)
print(result)