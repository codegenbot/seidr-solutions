```
def digitSum(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum

while True:
    user_input = input("Enter a number (or type 'exit' to quit): ")
    if user_input.lower() == 'exit':
        break
    for char in user_input:
        if not char.isdigit():
            print("Invalid input. Please enter an integer.")
            continue
    else:
        try:
            n = int(user_input) 
            if n > 2**31 - 1 or n < -2**31 + 1:
                print("Invalid input. The number should be within the range of the int type.")
            else:
                print(digitSum(n))
        except ValueError:
            print("Invalid input. Please enter a valid number.")