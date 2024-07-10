def add(x: int, y: int):
    return x + y

# take input from the user
input_str = input().split()
# convert input to integers
a, b = map(int, input_str)
# call the add function with input integers
result = add(a, b)
# provide output according to the contest requirements
print(result)