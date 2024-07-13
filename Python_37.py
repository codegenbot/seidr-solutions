def sort_even():
    user_input = input("Enter a list of numbers separated by space: ")
    user_list = [int(x) for x in user_input.split()]
    result = sort_even(l=user_list)
    print("Sorted even and odd numbers are: ", result)