```
def count_up_to(n):
    return [i for i in range(1, n+1)]

def check_even_numbers_up_to_n():
    try:
        n = int(input("Enter a number: "))
        if n <= 0:
            print("Please enter a positive integer.")
        else:
            numbers_list = count_up_to(n)
            print(f"The even numbers up to {n} are: {numbers_list}")
            if all(num % 2 == 0 for num in numbers_list):
                print("The numbers are all even.")
            else:
                print("The numbers are not all even.")
    except ValueError:
        print("Invalid input! Please enter an integer.")