```
def sum_squares(numbers):
    return sum([n**2 for n in numbers])

numbers = list(map(int, input("Enter numbers separated by space : ").split()))
print(sum_squares(numbers))