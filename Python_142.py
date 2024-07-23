numbers = input("Enter numbers separated by space : ")
if not numbers:
    print("No number entered.")
else:
    numbers = list(map(int, numbers.split()))
    print(sum_squares(numbers))

def sum_squares(numbers):
    return sum([n ** 2 for n in numbers])