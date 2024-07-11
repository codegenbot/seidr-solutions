```python
def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    try:
        input_str = input("Enter a list of numbers separated by spaces: ")
        if input_str.strip():  
            lst = [int(i) for i in input_str.split()]
            break
        else:
            print("Invalid input. Please enter numbers separated by spaces.")
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")
print(sum_squares(lst))