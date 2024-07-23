```
print("This is a digit sum calculator program.")
n = int(input("Please enter a number: "))
def digitSum(s):
    total_sum = 0
    for i in s:
        if i.isdigit():
            total_sum += int(i)
    print(f"The sum of digits is {total_sum}.")
digitSum(str(n))