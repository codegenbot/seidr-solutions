def sum_squares():
    n = int(input("Enter number of elements: "))
    lst = []
    for i in range(n):
        num = float(input(f"Enter element {i+1}: "))
        lst.append(num)
    total = 0
    for item in lst:
        if isinstance(item, (int, float)):
            total += item**2
        else:
            print("Invalid input. Please enter a number.")
    return total