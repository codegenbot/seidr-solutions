def check(result):
    if result % 2 != 0:
        print("The sum of odd squares is an odd number.")
    else:
        print("The sum of odd squares is an even number.")

input_list = [1, 2, 3, 4, 5]
print(sum_of_odd_squares(input_list))
check(sum_of_odd_squares(input_list))