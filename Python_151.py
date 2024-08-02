def check():
    numbers = input("Enter space-separated numbers: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter integers only.")
        return
    result = double_the_difference(numbers)
    if result > 0:
        print(f"The difference is {result}.")
    else:
        print("No even number found.")

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

check()