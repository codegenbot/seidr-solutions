def double_the_difference(input_list):
    return sum(i**2 for i in input_list if isinstance(i, int) and i % 2 != 0)


# Example usage
user_input = list(map(int, input("Enter numbers separated by space: ").split()))
result = double_the_difference(user_input)
print(result)