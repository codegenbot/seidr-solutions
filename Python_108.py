def count_nums(arr):
    return sum(1 for num in arr if sum(int(digit) for digit in str(num)) > 0)