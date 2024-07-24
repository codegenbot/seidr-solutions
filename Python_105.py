```Python
def check(result):
    if result == "Correct":
        return 1
    else:
        return 0


if __name__ == "__main__":
    input_list = list(range(1, 19))
    while True:
        try:
            nums = []
            while len(nums) < 3:
                num = int(input(f"Enter number {len(nums)+1}: "))
                if num not in input_list:
                    print("Invalid input. Please enter numbers from 1 to 18.")
                else:
                    nums.append(num)
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    total_sum = sum(nums)
    if total_sum in input_list:
        result = "Correct"
    else:
        result = "Incorrect"
    print(check(result))