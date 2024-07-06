"""
def count_up_to(n):
    return list(range(1, n+1))

def check(numbers_list):
    return all(num % 2 == 0 for num in numbers_list)

try:
    n = int(input("Enter a number: "))
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        numbers_list = count_up_to(n)
        if not check(numbers_list):
            print("The numbers are not all even.")
        else:
            print("The numbers are all even.")
except ValueError:
    print("Invalid input! Please enter an integer.")