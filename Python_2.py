```
def check(number):
    truncated_number = "{0:.2f}".format(float(number))
    print(truncated_number)

number = float(input("Enter a number: "))
check(number)