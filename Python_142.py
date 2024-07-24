def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i % 3) + (i % 4) in [1, 2]:
            total_sum += lst[i] ** 2
    return total_sum


n = int(input("Enter the number of elements in the list: "))
lst = [int(input(f"Enter element {i+1}: ")) for i in range(n)]