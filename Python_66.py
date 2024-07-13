def digitSum(n):
    str_n = str(n)
    sum_of_digits = 0
    for char in str_n:
        if char.isdigit():
            sum_of_digits += int(char)
    return sum_of_digits