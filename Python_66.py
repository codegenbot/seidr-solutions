def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

def check(digit_sum):
    if digit_sum % 3 == 0:
        return "YES"
    else:
        return "NO"

input_value = int(input())
print(check(sum_of_digits(input_value)))