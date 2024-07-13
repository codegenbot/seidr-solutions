def has_close_elements():
    numbers = input("Enter space-separated floating point numbers: ")
    threshold = float(input("Enter a threshold value: "))

    if not numbers:
        print(
            "Invalid input. Please enter valid space-separated floating point numbers."
        )
        return False

    try:
        nums = list(map(float, numbers.split()))

        if len(nums) < 2:
            print("At least two numbers are required to check for close elements.")
            return False

        for i in range(1, len(nums)):
            if abs(nums[i] - nums[i - 1]) <= threshold:
                print("The input numbers have at least one pair of close elements.")
                return True
        print("The input numbers do not have any pairs of close elements.")
        return False
    except ValueError as e:
        if "not enough values" in str(e):
            print(
                "Invalid input. Please enter valid space-separated floating point numbers."
            )
            return False
        else:
            raise e