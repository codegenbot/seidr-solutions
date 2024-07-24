def double_the_difference(input_list):
    # calculate the difference
    diff = sum(input_list) - len(input_list)
    
    # double the difference
    return 2 * diff

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
print(double_the_difference(input_list))