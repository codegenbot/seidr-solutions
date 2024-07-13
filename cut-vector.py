n = int(input())
nums = [int(input())]

if n == 1:
    print(nums[0])
    print(0)
else:
    mid = n // 2
    if sum(nums[:mid]) == sum(nums[mid:]):
        print(" ".join(map(str, nums[:mid])))
        print(" ".join(map(str, nums[mid:])))
    else:
        diff = abs(sum(nums[:mid]) - sum(nums[mid:]))
        if n % 2 == 0:
            if sum(nums[: mid - 1]) == sum(nums[mid - 1 :]):
                print(" ".join(map(str, nums[: mid - 1])))
                print(" ".join(map(str, nums[mid - 1 :])))
            elif abs(sum(nums[: mid - 1]) - sum(nums[mid - 1 :])) < diff:
                print(" ".join(map(str, nums[: mid - 1])))
                print(" ".join(map(str, nums[mid - 1 :])))
            else:
                print(" ".join(map(str, nums[:mid])))
                print(" ".join(map(str, nums[mid:])))
        else:
            print(" ".join(map(str, nums[: mid + 1])))
            print(" ".join(map(str, nums[mid + 1 :])))