```
while True:
    numbers = list(map(int, input("Enter numbers separated by space : ").split()))
    if all(isinstance(n, int) for n in numbers):
        break
print(sum_squares(numbers))

def sum_squares(numbers):
    return sum([n ** 2 for n in numbers])