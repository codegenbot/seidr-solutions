```
def sum_squares():
    lst = input("Enter a list of numbers separated by space: ").split()
    try:
        lst = [int(num) for num in lst]
    except ValueError:
        raise ValueError("Invalid input. Please enter only integers.")
    
    if not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")
    
    total_sum = 0
    for num in lst:
        total_sum += num ** 2
    return total_sum