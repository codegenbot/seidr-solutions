```
try:
    n = int(input("Enter a number: "))
except ValueError:
    print("Invalid input! Please enter an integer.")
else:
    def count_up_to(n):
        return list(range(1, n+1))

    def check(numbers_list):
        for num in numbers_list:
            if num % 2 != 0:
                return False
        return True

    numbers_list = count_up_to(n)
    if not check(numbers_list):
        print("The numbers are all even.")
    else:
        print("The numbers are not all even.")