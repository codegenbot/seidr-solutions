input_str = input("Enter numbers separated by space: ")
try:
    input_list = list(map(int, input_str.split()))
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    exit()
print(sum_squares(input_list))