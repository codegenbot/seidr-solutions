```
def digitSum(n):
    return sum(int(c) for c in str(n))

while True:
    try:
        user_input = input("Enter a number (or type 'exit' to quit): ")
        if user_input.lower() == 'exit':
            break
        n = int(user_input)
        print(digitSum(n))
    except ValueError:
        print("Invalid input. Please enter an integer.")