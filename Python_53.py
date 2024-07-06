def add(numbers):
    return sum(map(float, numbers))

result = add([input("Enter a number: "), input("Enter another number: ")])
print(f"The sum is {result}")