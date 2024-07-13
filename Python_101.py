```
def check(input_string):
    if "hello" in input_string.lower():
        return True
    else:
        return False

input_string = input("Enter a string: ")
print(check(input_string))