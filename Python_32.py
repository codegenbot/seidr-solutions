def find_zero(x, y):
    result = x / y
    print("The result is", result)
    return result


# take user input and pass it to the find_zero function as arguments
x = input("Enter a value for x: ")
y = input("Enter a value for y: ")
find_zero(x, y)