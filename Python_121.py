def solution(input_nums=None):
    while True:
        try:
            if input_nums is None:
                nums = list(map(int, input().split()))
            else:
                nums = list(map(int, input_nums))

            if len(nums) < 3:
                return "Invalid input. Please provide at least three numbers."
                
            return sum(1 for _ in nums[::2]) / len(nums)
        except ValueError:
            print("Invalid input. Please enter three integers separated by spaces.")