```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    for num, freq in freq_dict.items():
        if freq >= num and num > 0:
            max_num = num
    return max_num

nums = input("Enter a list of numbers separated by space: ")
numbers = [int(num) for num in nums.split()]
print(search(numbers))