```
def digitSum(n):
    return sum(int(c) for c in str(n))

while True:
    user_input = input("Enter a number (or type 'exit' to quit): ")
    if user_input.lower() == 'exit':
        break
    for char in user_input:
        if not char.isdigit():
            print("Invalid input. Please enter an integer.")
            continue
    else:
        n = int(user_input)
        print(digitSum(n))