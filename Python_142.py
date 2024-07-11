```
def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    try:
        num_str = input("Enter a number: ")
        if not num_str.strip():  
            print("Invalid input. Please enter a number.")
            continue
        num = int(num_str)
        print(f"The square of {num} is {sum_squares([num])}.")
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")