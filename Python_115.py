def max_fill():
    grid = []
    for _ in range(int(input("Enter number of rows: "))):
        row = list(map(int, input("Enter row values (space separated): ").split()))
        grid.append(row)
    capacity = int(input("Enter the capacity: "))
    total_amount = 0
    left = [c for r in grid for c in r]
    right = left[::-1]
    left_ptr, right_ptr = 0, len(left) - 1
    
    while left_ptr <= right_ptr:
        h = min(capacity, left[left_ptr], right[right_ptr])
        total_amount += h
        left[left_ptr] -= h
        right[right_ptr] -= h
        if left[left_ptr] == 0:
            left_ptr += 1
        if right[right_ptr] == 0:
            right_ptr -= 1
    
    return total_amount