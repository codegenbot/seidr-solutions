def sorted_list_sum(nums):
    while True:
        try:
            user_input = input().split()
            if all(i.isnumeric() for i in user_input):
                return sum(sorted(map(int, user_input)))
            else:
                print("Invalid input. Please enter a list of numbers.")
        except ValueError:
            print("Invalid input. Please enter a list of numbers.")