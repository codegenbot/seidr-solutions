```Python
def digitSum(s):
    total_sum = sum(int(c) for c in s if c.isdigit())
    return total_sum

input_s = str(input("Enter a string containing at least one digit (like '123abc'): "))
print(digitSum(input_s))