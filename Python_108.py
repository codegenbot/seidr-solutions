def count_nums(arr):
    return sum(sum(int(digit) for digit in str(abs(num))) > 0 for num in arr)