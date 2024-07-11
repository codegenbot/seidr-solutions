```
def calculate_stats():
    while True:
        user_input = input("Enter a list of numbers separated by space, or 'q' to quit: ")

        if user_input.lower() in ["q", "quit", "exit"]:
            print("Goodbye!")
            exit()

        try:
            if not user_input:
                print("Please enter a number or 'q' to quit.")
                continue

            nums = [int(i) for i in user_input.split()]
            stat_type = input("Do you want to calculate mean or median? (type 'mean' or 'median'): ").lower()

            if stat_type not in ["mean", "median"]:
                print("Invalid input. Please enter 'mean' or 'median'.")
                continue

            if all(num.isdigit() for num in user_input.split()):
                if len(nums) > 0:
                    if stat_type == "mean":
                        print(f"Mean: {sum(nums)/len(nums)}")
                    elif stat_type == "median":
                        nums.sort()
                        mid = len(nums) // 2
                        if len(nums) % 2:
                            print(f"Median: {nums[mid]}")
                        else:
                            print(f"Median: {(nums[mid-1] + nums[mid]) / 2}")
                else:
                    print("Please enter a number or 'q' to quit.")
            elif user_input.lower() in ["q", "quit", "exit"]:
                print("Goodbye!")
                exit()
            else:
                if stat_type == "mean":
                    average = sum(nums) / len(nums)
                    print(f"Mean: {average}")
                elif stat_type == "median":
                    mid_value = nums[len(nums) // 2] if len(nums) % 2 != 0 else (nums[len(nums) // 2 - 1] + nums[len(nums) // 2]) / 2
                    print(f"Median: {mid_value}")

        except ValueError as e:
            if str(e).startswith('invalid literal'):
                print("Invalid input. Please enter a correct number or 'q' to quit.")
            else:
                raise