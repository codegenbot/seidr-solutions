```
def search(nums):
    freq = {}
    max_num = -1
    for num in nums:
        if num > 0:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        elif num < 0:
            break
        else:
            return 0
    for num, count in freq.items():
        if num >= count and num > 0:
            max_num = num
            break
    if max_num == -1:
        max_num = 0
    return max_num


nums = input("Enter numbers separated by space: ")
try:
    nums = [int(i) for i in nums.split()]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    exit()
print(search(nums))