def get_largest_number():
    n = int(input("Enter the number of elements in the array: "))
    largest_num = -1
    for _ in range(n):
        num = float(input(f"Enter {i+1}th element: "))
        if num > largest_num:
            largest_num = num
    return largest_num