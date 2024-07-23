```
numbers = list(map(int, input("Enter numbers separated by space : ").split()))
print(sum_squares())

def sum_squares():
    return sum([n ** 2 for n in numbers])