```
def sum_squares(n):
    total_sum = 0
    for i in range(1, n+1):
        if i % 3 == 0 or i % 4 == 0:
            total_sum += i ** 2
    return total_sum

while True:
    print("Please enter a positive integer: ")
    user_input = input()
    
    try:
        n = int(user_input)
        if n > 0:
            print(sum_squares(n))
        else:
            print("Invalid input. Please enter a positive integer.")
        break
    except ValueError:
        print("Invalid input. Please enter a valid positive integer.")