```
input_num = input("Enter space-separated integers: ")
nums = [int(x) for x in input_num.split()]
print(minSubArraySum(list(map(int, nums))))