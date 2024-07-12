```Python
def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

def is_divisible_by_three(n):
    if n % 3 == 0:
        print("The number is divisible by 3")
    else:
        print("The number is not divisible by 3")

num = 12
digit_sum = sum_of_digits(num)
is_divisible_by_three(digit_sum)