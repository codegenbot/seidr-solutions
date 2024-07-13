```
def check(input_string):
    if "hello" in input_string.lower():
        print("Hello is present")
    else:
        print("Hello is not present")

while True:
    try:
        input_string = input("Enter a string: ")
        if input_string.strip():  
            check(input_string)
            break
        print("Please enter a non-empty string.")
    except:
        print("Invalid input. Please enter a string.")