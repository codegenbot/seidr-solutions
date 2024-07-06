```
def sum_squares(lst):
    if not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")
    
    total_sum = 0
    for num in lst:
        if not isinstance(num, (int, float)):
            raise ValueError(f"Invalid input '{num}' found. Input must contain only numbers.")
        total_sum += abs(num) ** 2
    return total_sum

def main():
    nums = input("Enter numbers separated by spaces: ").split()
    try:
        print(sum_squares([float(x) for x in nums]))
    except ValueError as e:
        print(f"Error: {str(e)}")

if __name__ == "__main__":
    main()