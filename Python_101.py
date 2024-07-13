```
def check(input_string):
    if "hello" in input_string.lower():
        print("Hello is present")
    else:
        print("Hello is not present")

input_string = input("Enter a string: ")
check(input_string)