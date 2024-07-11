```
while True:
    user_input = input("Enter a list of numbers separated by space, or 'q' to quit: ")
    if user_input.lower() in ["q", "quit", "exit"]:
        print("Goodbye!")
        exit()
    try:
        if len(user_input.split()) > 0 and all(num.isdigit() for num in user_input.split()):
            nums = [int(i) for i in user_input.split()]
            stat_type = input("Do you want to calculate mean or median? (type 'mean' or 'median'): ").lower()
            if stat_type == "mean":
                print(f"Mean: {sum(nums)/len(nums)}")
            elif stat_type == "median":
                nums.sort()
                mid = len(nums) // 2
                if len(nums) % 2:
                    print(f"Median: {nums[mid]}")
                else:
                    print(f"Median: {(nums[mid-1] + nums[mid]) / 2}")
            elif stat_type in ["q", "quit", "exit"]:
                print("Goodbye!")
                exit()
            else:
                print("Invalid input. Please enter 'mean', 'median' or 'q' to quit.")
        elif user_input.lower() in ["q", "quit", "exit"]:
            print("Goodbye!")
            exit()
        else:
            print("Invalid input. Please enter a correct number or 'q' to quit.")
    except Exception as e:
        print(f"Error: {e}")