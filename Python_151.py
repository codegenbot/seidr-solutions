def double_the_difference():
    user_input = input("Enter a list of integers: ")
    lst = [int(x) for x in user_input.split()]
    print(sum(i ** 2 for i in lst if isinstance(i, int) and i > 0))