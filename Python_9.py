def rolling_max():
    numbers = input("Enter the numbers separated by space: ").split()
    max_so_far = 0
    result = []
    for num in map(int, numbers):
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
    return result